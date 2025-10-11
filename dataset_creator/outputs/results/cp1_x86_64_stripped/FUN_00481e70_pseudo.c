
undefined8 FUN_00481e70(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_00481edb;
  uVar2 = 1;
  if (param_2 == 0) goto LAB_00481edd;
  lVar3 = thunk_FUN_0041cdd0(param_2,"distid");
  if (lVar3 == 0) {
LAB_00481f30:
    lVar3 = thunk_FUN_0041cdd0(param_2,"digest-size");
    if (lVar3 != 0) {
      uVar2 = thunk_FUN_0041d830(lVar3,&local_30);
      if (((int)uVar2 == 0) || (uVar2 = 0, *(long *)(param_1 + 0x170) != local_30))
      goto LAB_00481edd;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"digest");
    if (lVar3 != 0) {
      local_28 = 0;
      iVar1 = FUN_0041e0b0(lVar3,&local_28,0);
      if (iVar1 == 0) goto LAB_00481edb;
      iVar1 = FUN_00481af0(param_1,local_28);
      if (iVar1 == 0) {
        FUN_0041ad60(local_28,"../providers/implementations/signature/sm2_sig.c",0x1d2);
        uVar2 = 0;
        goto LAB_00481edd;
      }
      FUN_0041ad60(local_28,"../providers/implementations/signature/sm2_sig.c",0x1d5);
    }
    uVar2 = 1;
  }
  else {
    local_30 = 0;
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      iVar1 = FUN_0041e150(lVar3,&local_30,0,&local_28);
      if (iVar1 != 0) {
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x178),
                     "../providers/implementations/signature/sm2_sig.c",0x1bb);
        *(long *)(param_1 + 0x178) = local_30;
        *(undefined8 *)(param_1 + 0x180) = local_28;
        goto LAB_00481f30;
      }
    }
LAB_00481edb:
    uVar2 = 0;
  }
LAB_00481edd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

