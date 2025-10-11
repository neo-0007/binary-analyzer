
undefined8 poly1305_init_base2_44(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[5] = uVar1 & 0xffc0fffffff;
  uVar1 = (uVar1 & 0xffffffc0fffffff) >> 0x2c | (uVar2 & 0xfffffc) << 0x14;
  uVar2 = (uVar2 & 0xffffffc0ffffffc) >> 0x18;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[3] = uVar1 * 0x14;
  param_1[4] = uVar2 * 0x14;
  param_1[8] = 0xffffffffffffffff;
  *param_3 = poly1305_blocks_vpmadd52;
  param_3[1] = poly1305_emit_base2_44;
  return 1;
}

