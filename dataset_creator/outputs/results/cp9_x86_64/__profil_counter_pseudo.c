
void __profil_counter(undefined8 param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_3 + 0xa8) - pc_offset;
  uVar2 = (uVar2 >> 0x11) * (ulong)pc_scale + ((uVar2 >> 1 & 0xffff) * (ulong)pc_scale >> 0x10);
  if (uVar2 < nsamples) {
    psVar1 = (short *)(samples + uVar2 * 2);
    *psVar1 = *psVar1 + 1;
  }
  return;
}

