LilycoveCity_CoveLilyMotel_2F_MapBorder::
	.incbin "data/layouts/LilycoveCity_CoveLilyMotel_2F/border.bin"

LilycoveCity_CoveLilyMotel_2F_MapBlockdata::
	.incbin "data/layouts/LilycoveCity_CoveLilyMotel_2F/map.bin"

	.align 2
LilycoveCity_CoveLilyMotel_2F_Layout::
	.4byte 0xc
	.4byte 0x9
	.4byte LilycoveCity_CoveLilyMotel_2F_MapBorder
	.4byte LilycoveCity_CoveLilyMotel_2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

