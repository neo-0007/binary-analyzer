
long FUN_0059e1c0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_00712710(param_1,0x2f);
  if ((lVar3 != 0) && (lVar4 = FUN_0041c2c0(param_1,"../crypto/x509/v3_utl.c",0x466), lVar4 != 0)) {
    puVar5 = (undefined1 *)((lVar3 - param_1) + lVar4);
    *puVar5 = 0;
    iVar1 = FUN_0059def0(auStack_68,lVar4);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_0059def0(auStack_68 + iVar1,puVar5 + 1);
      FUN_0041ad60(lVar4,"../crypto/x509/v3_utl.c",0x473);
      if (((iVar2 == 0) || (iVar1 != iVar2)) || (lVar3 = FUN_004a7670(), lVar3 == 0)) {
        lVar4 = 0;
        lVar3 = 0;
      }
      else {
        lVar4 = 0;
        iVar1 = thunk_FUN_004a1fa0(lVar3,auStack_68,iVar1 + iVar2);
        if (iVar1 != 0) goto LAB_0059e2b0;
      }
    }
    FUN_0041ad60(lVar4,"../crypto/x509/v3_utl.c",0x482);
    thunk_FUN_004a2270(lVar3);
  }
  lVar3 = 0;
LAB_0059e2b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

