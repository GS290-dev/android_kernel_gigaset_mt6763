/*
 * Copyright (c) 2015-2016 MediaTek Inc.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _DTS_IOMMU_PORT_MT6761_H_
#define _DTS_IOMMU_PORT_MT6761_H_

#define MTK_M4U_ID(larb, port)	(((larb) << 5) | (port))

/* Local arbiter ID */
#define MTK_M4U_TO_LARB(id)		(((id) >> 5) & 0x7)
/* PortID within the local arbiter */
#define MTK_M4U_TO_PORT(id)		((id) & 0x1f)



#define M4U_LARB0_ID		8
#define M4U_LARB1_ID		11
#define M4U_LARB2_ID		24

#define MTK_IOMMU_LARB_NR 3

/* larb0 */
#define M4U_PORT_DISP_OVL0		MTK_M4U_ID(0, 0)
#define M4U_PORT_DISP_2L_OVL0_LARB0	MTK_M4U_ID(0, 1)
#define M4U_PORT_DISP_RDMA0		MTK_M4U_ID(0, 2)
#define M4U_PORT_DISP_WDMA0		MTK_M4U_ID(0, 3)
#define M4U_PORT_MDP_RDMA0		MTK_M4U_ID(0, 4)
#define M4U_PORT_MDP_WDMA0		MTK_M4U_ID(0, 5)
#define M4U_PORT_MDP_WROT0		MTK_M4U_ID(0, 6)
#define M4U_PORT_DISP_FAKE0		MTK_M4U_ID(0, 7)
/* larb1 */
#define M4U_PORT_VENC_RCPU		MTK_M4U_ID(1, 0)
#define M4U_PORT_VENC_REC		MTK_M4U_ID(1, 1)
#define M4U_PORT_VENC_BSDMA		MTK_M4U_ID(1, 2)
#define M4U_PORT_VENC_SV_COMV		MTK_M4U_ID(1, 3)
#define M4U_PORT_VENC_RD_COMV		MTK_M4U_ID(1, 4)
#define M4U_PORT_JPGENC_RDMA		MTK_M4U_ID(1, 5)
#define M4U_PORT_JPGENC_BSDMA		MTK_M4U_ID(1, 6)
#define M4U_PORT_VENC_CUR_LUMA	MTK_M4U_ID(1, 7)
#define M4U_PORT_VENC_CUR_CHROMA	MTK_M4U_ID(1, 8)
#define M4U_PORT_VENC_REF_LUMA	MTK_M4U_ID(1, 9)
#define M4U_PORT_VENC_REF_CHROMA	MTK_M4U_ID(1, 10)
/* larb2 */
#define M4U_PORT_CAM_IMGO		MTK_M4U_ID(2, 0)
#define M4U_PORT_CAM_RRZO		MTK_M4U_ID(2, 1)
#define M4U_PORT_CAM_AAO		MTK_M4U_ID(2, 2)
#define M4U_PORT_CAM_LCSO		MTK_M4U_ID(2, 3)
#define M4U_PORT_CAM_ESFKO		MTK_M4U_ID(2, 4)
#define M4U_PORT_CAM_IMGO_S		MTK_M4U_ID(2, 5)
#define M4U_PORT_CAM_IMGO_S2		MTK_M4U_ID(2, 6)
#define M4U_PORT_CAM_LSCI		MTK_M4U_ID(2, 7)
#define M4U_PORT_CAM_LSCI_D		MTK_M4U_ID(2, 8)
#define M4U_PORT_CAM_AFO		MTK_M4U_ID(2, 9)
#define M4U_PORT_CAM_AFO_D		MTK_M4U_ID(2, 10)
#define M4U_PORT_CAM_BPCI		MTK_M4U_ID(2, 11)
#define M4U_PORT_CAM_BPCI_D		MTK_M4U_ID(2, 12)
#define M4U_PORT_CAM_UFDI		MTK_M4U_ID(2, 13)
#define M4U_PORT_CAM_IMGI		MTK_M4U_ID(2, 14)
#define M4U_PORT_CAM_IMG2O		MTK_M4U_ID(2, 15)
#define M4U_PORT_CAM_IMG3O		MTK_M4U_ID(2, 16)
#define M4U_PORT_CAM_VIPI		MTK_M4U_ID(2, 17)
#define M4U_PORT_CAM_VIP2I		MTK_M4U_ID(2, 18)
#define M4U_PORT_CAM_VIP3I		MTK_M4U_ID(2, 19)
#define M4U_PORT_CAM_ICEI		MTK_M4U_ID(2, 20)
#define M4U_PORT_CAM_FD_RP		MTK_M4U_ID(2, 21)
#define M4U_PORT_CAM_FD_WR		MTK_M4U_ID(2, 22)
#define M4U_PORT_CAM_FD_RB		MTK_M4U_ID(2, 23)

#define M4U_PORT_UNKNOWN		(M4U_PORT_CAM_FD_RB+1)

#endif
