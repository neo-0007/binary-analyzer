
int FUN_00620c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                ulong *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_4c [4];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar3 = FUN_004069d0(param_1,"SHA2-256",param_2);
  if ((lVar3 == 0) ||
     (((lVar4 = *param_4, lVar4 == 0 || (*param_5 < 0x20)) &&
      (lVar4 = FUN_0041ad90(0x20,"../crypto/ct/ct_sct_ctx.c",0xdc), lVar4 == 0)))) {
    lVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = FUN_005ae240(param_3,&local_48);
    if ((0 < iVar1) &&
       (iVar2 = FUN_00407440(local_48,(long)iVar1,lVar4,local_4c,lVar3,0), iVar2 != 0)) {
      if (lVar4 == *param_4) {
        lVar4 = 0;
        iVar2 = 1;
      }
      else {
        iVar2 = 1;
        FUN_0041ad60(*param_4,"../crypto/ct/ct_sct_ctx.c",0xea);
        *param_4 = lVar4;
        lVar4 = 0;
        *param_5 = 0x20;
      }
    }
  }
  FUN_00406a50(lVar3);
  FUN_0041ad60(lVar4,"../crypto/ct/ct_sct_ctx.c",0xf3);
  FUN_0041ad60(local_48,"../crypto/ct/ct_sct_ctx.c",0xf4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

