fn main() {
    let response = reqwest::blocking::get(
        "https://crypto.com/price",
    )
    .unwrap()
    .text()
    .unwrap();

    let document = scraper::Html::parse_document(&response);

    let name_selector = scraper::Selector::parse("p.css-rkws3").unwrap();
    let price_selector = scraper::Selector::parse("td.css-1vyy4qg > div.css-b1ilzc").unwrap();
    let tfh_selector = scraper::Selector::parse("td>p.chakra-text").unwrap();
    let tfv_selector = scraper::Selector::parse("td.css-1nh9lk8").unwrap();


    let mut name_element = document.select(&name_selector);
    let mut price_element = document.select(&price_selector);
    let mut tfh_element = document.select(&tfh_selector);
    let mut tfv_element = document.select(&tfv_selector);

    
    let mut file = csv::Writer::from_path("CryptoList.csv").unwrap();

    file.write_record(&["Name","Price","24H_Change","24H_Volume","Market_Cap"]).expect("Could not write");

    for _i in 1..51{
        
        let name = name_element.next().unwrap().text().collect::<String>();
        let price = price_element.next().unwrap().text().collect::<String>();
        let tfh = tfh_element.next().unwrap().text().collect::<String>();
        let tfv = tfv_element.next().unwrap().text().collect::<String>();
        let m = tfv_element.next().unwrap().text().collect::<String>();
        
        file.write_record([name,price,tfh,tfv,m]).expect("Could not write");
    }

    file.flush().expect("Could not close");
    println!("Done");
}
