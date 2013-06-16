#if !defined(__RFM12B_JEENODE_H__)
#define __RFM12B_JEENODE_H__

/*
   Bit masks to extract Jee-protocol flags from header
*/
#define RFM12B_JEE_HDR_CTL_BIT			0x80
#define RFM12B_JEE_HDR_DST_BIT			0x40
#define RFM12B_JEE_HDR_ACK_BIT			0x20

/*
   Macro to extract a Jeenode identifier from a header
*/
#define RFM12B_JEE_ID_FROM_HDR(hdr)		(hdr & 0x1f)

#endif // __RFM12B_JEENODE_H__