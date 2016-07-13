#ifndef CONFIG_H
#define CONFIG_H

/* nRF24L01 config */
// The RF channel frequency: F = 2400 + CONFIG_NRF_CHANNEL [MHz] (0 - 125)
#define CONFIG_NRF_CHANNEL 124
// RF output power in TX mode (0 - 3)
#define CONFIG_NRF_POWER 3
// Air Data Rate (0 - 1Mbps; 1 - 2Mbps)
#define CONFIG_NRF_DATA_RATE 0
// Auto Retransmit Delay (0 - 250uS ... 15 - 4000uS)
#define CONFIG_NRF_AUTO_RETRANSMIT_DELAY 1
// Auto Retransmit Count (0 - 15)
#define CONFIG_NRF_AUTO_RETRANSMIT_COUNT 4
#define CONFIG_NRF_ENABLE_RX
#define CONFIG_NRF_ENABLE_AUTO_ACKNOWLEDGMENT
#define NRF_CSN_PORT PORTD
#define NRF_CSN_DDR DDRD
#define NRF_CSN_PIN PD5
#define NRF_CE_PORT PORTD
#define NRF_CE_DDR DDRD
#define NRF_CE_PIN PD4
// Max RX message length (1 - 32)
#define CONFIG_NRF_RX_MAX_LEN 32
#define CONFIG_NRF_RX_PIPE_NUMBER 2

#endif  /* CONFIG_H */