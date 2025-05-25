//
//  Data.swift
//  CryptoTrack
//
//  Created by Thomas Leterme on 31/12/2022.
//

import Foundation

struct CryptoCurrency {
    let name: String
    let symbol: String
    let iconName: String
    let value: Float
    let evolution: Float
}

let CryptoList = [
    CryptoCurrency(name: "Bitcoin", symbol: "BTC", iconName: "bitcoin-btc-logo", value: 34065.26, evolution: +2.56),
    CryptoCurrency(name: "Etherum", symbol: "ETH", iconName: "etherum-eth-logo", value: 2167.96, evolution: +1.26),
    CryptoCurrency(name: "Tether", symbol: "USDT", iconName: "tether-usdt-logo", value: 0.94, evolution: -1.95),
    CryptoCurrency(name: "Binance USD", symbol: "BUSD", iconName: "binance-usd-busd-logo", value: 289.75, evolution: -5.67),
    CryptoCurrency(name: "Cardano", symbol: "ADA", iconName: "cardano-ada-logo", value: 0.49, evolution: -19.56),
    CryptoCurrency(name: "Solana", symbol: "SOL", iconName: "solana-sol-logo", value: 48.76, evolution: +1.58),
    CryptoCurrency(name: "Terra", symbol: "LUNA", iconName: "terra-luna-logo", value: 0.01, evolution: -24.32),
]
