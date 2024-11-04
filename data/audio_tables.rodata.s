.include "macro.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .rodata

.balign 16
glabel gSoundFontTable
    .incbin "sound/table_font.bin"

.balign 16
glabel gSequenceFontTable
    .incbin "sound/table_seqfont.bin"

.balign 16
glabel gSequenceTable
    .incbin "sound/table_seq.bin"

.balign 16
glabel gSampleBankTable
    .incbin "sound/table_sample.bin"

