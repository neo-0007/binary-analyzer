
bool FUN_00544ac0(undefined8 param_1,long param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  byte local_9c [4];
  undefined8 local_98 [7];
  undefined4 local_60;
  undefined4 local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  puVar3 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 0) {
    if (param_4 == (byte *)0x0) {
      param_4 = local_9c;
    }
    iVar1 = FUN_00542210(local_98);
    if (iVar1 != 0) {
      local_58 = 2;
      local_60 = 0xffffffff;
      if ((*(byte *)(param_2 + 0x40) & 4) == 0) {
        iVar1 = FUN_005449b0();
      }
      else {
        iVar1 = FUN_00544a30(param_1,local_98,param_3,param_4,0);
      }
      if ((iVar1 == 0) && ((*param_4 & 8) != 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ffc/ffc_params_validate.c",0x7d,"ossl_ffc_params_simple_validate");
        FUN_0051f8f0(5,0x78,0);
      }
      FUN_00541f50(local_98);
      bVar4 = iVar1 != 0;
      goto LAB_00544b69;
    }
  }
  bVar4 = false;
LAB_00544b69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

