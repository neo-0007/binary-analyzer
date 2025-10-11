
uint FUN_004643c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  lVar2 = FUN_0043bf50();
  if (lVar2 != 0) {
    uVar1 = FUN_0049e110(lVar2,&local_38);
    uVar3 = ~uVar1 >> 0x1f;
    if (-1 < (int)uVar1) {
      *param_3 = local_38[1];
      *param_4 = *local_38;
      FUN_0041ad60(local_38,"../providers/implementations/encode_decode/endecoder_common.c",100);
    }
    FUN_004ab560(lVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

