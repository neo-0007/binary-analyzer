
undefined4 FUN_00569600(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  iVar2 = FUN_00569560(*(undefined8 *)(param_2 + 0x20),&local_48,&local_54);
  if (iVar2 != 0) {
    iVar2 = FUN_0056a620(*(undefined8 *)(param_2 + 0x20),&local_50);
    uVar1 = local_50;
    if (0 < iVar2) {
      uVar4 = FUN_004239c0(**(undefined4 **)(param_2 + 8));
      iVar2 = FUN_005af9b0(param_1,uVar4,local_54,local_48,uVar1,iVar2);
      if (iVar2 == 0) {
        FUN_0041ad60(local_50,"../crypto/rsa/rsa_ameth.c",0x45);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      goto LAB_0056964a;
    }
  }
  uVar3 = 0;
LAB_0056964a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

