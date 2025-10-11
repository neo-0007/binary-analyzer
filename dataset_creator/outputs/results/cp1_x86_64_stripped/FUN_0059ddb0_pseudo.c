
void FUN_0059ddb0(ushort *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  puVar5 = auStack_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 4) {
    FUN_004aeb30(auStack_68,0x28,"%d.%d.%d.%d",(char)*param_1,*(undefined1 *)((long)param_1 + 1),
                 (char)param_1[1],*(undefined1 *)((long)param_1 + 3));
  }
  else if (param_2 == 0x10) {
    iVar3 = 7;
    iVar4 = 0x28;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = FUN_004aeb30(puVar5,(long)iVar4,&DAT_0080b5b5,uVar1 << 8 | uVar1 >> 8);
      iVar4 = iVar4 - iVar2;
      puVar5 = puVar5 + iVar2;
      if (iVar2 < 0) goto LAB_0059ddfe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_004aeb30(puVar5,(long)iVar4,&DAT_0080b5cd,*param_1 << 8 | *param_1 >> 8);
  }
  else {
    FUN_004aeb30(auStack_68,0x28,"<invalid length=%d>",param_2);
  }
LAB_0059ddfe:
  FUN_0041c2c0(auStack_68,"../crypto/x509/v3_utl.c",0x43d);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

