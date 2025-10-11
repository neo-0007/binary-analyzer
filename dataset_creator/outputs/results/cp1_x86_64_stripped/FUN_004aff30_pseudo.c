
int FUN_004aff30(undefined4 param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_ac;
  undefined1 local_a8 [120];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0x70;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_a8;
  }
  uVar3 = FUN_005bf8e0(param_2);
  iVar1 = FUN_00770e30(param_1,uVar3,&local_ac);
  if (iVar1 == -1) {
    iVar2 = FUN_004b1020(0xffffffff);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x13d,"BIO_accept_ex");
      puVar4 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar4,"calling accept()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x13f,"BIO_accept_ex");
      FUN_0051f8f0(0x20,100,0);
    }
  }
  else {
    iVar2 = FUN_004af340(iVar1,(uint)(param_3 >> 3) & 1);
    if (iVar2 == 0) {
      FUN_0076dc30(iVar1);
      iVar1 = -1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

