
undefined8
FUN_00539240(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_005392db;
  local_58 = param_1;
  local_54 = param_2;
  if (DAT_00941208 == 0) {
LAB_00539300:
    lVar2 = FUN_00423d90(&local_58,&DAT_0092dec0,0x1d,0x20,FUN_00539070);
    uVar3 = 0;
    if (lVar2 == 0) goto LAB_005392db;
  }
  else {
    uVar1 = FUN_00435f40(DAT_00941208,&local_58,0);
    lVar2 = FUN_004364a0(DAT_00941208,uVar1);
    if (lVar2 == 0) goto LAB_00539300;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  uVar3 = 1;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(lVar2 + 0x18);
  }
LAB_005392db:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

