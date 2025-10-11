
int FUN_004aefa0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = FUN_005bfe40(param_1,&local_38,&local_30,1);
  if (iVar1 != 0) {
    iVar1 = FUN_004aec60();
    if (iVar1 == 1) {
      iVar1 = FUN_005c0430(local_38,local_30,1,0,1,&local_28);
      if (iVar1 == 0) {
        uVar2 = FUN_005bfd60(local_28);
        uVar3 = FUN_005bfd50(local_28);
        uVar4 = FUN_005bfd40(local_28);
        iVar1 = FUN_004af5f0(uVar4,uVar3,uVar2,0);
        if (iVar1 == -1) goto LAB_004af024;
        uVar6 = FUN_005bfdc0(local_28);
        iVar5 = FUN_004afb50(iVar1,uVar6,param_2 != 0);
        if (iVar5 == 0) {
          FUN_004b0060(iVar1);
          goto LAB_004af024;
        }
      }
      else {
LAB_004af024:
        iVar1 = -1;
      }
      FUN_005bfdd0(local_28);
      FUN_0041ad60(local_38,"../crypto/bio/bio_sock.c",0xf2);
      FUN_0041ad60(local_30,"../crypto/bio/bio_sock.c",0xf3);
      goto LAB_004af05e;
    }
  }
  iVar1 = -1;
LAB_004af05e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

