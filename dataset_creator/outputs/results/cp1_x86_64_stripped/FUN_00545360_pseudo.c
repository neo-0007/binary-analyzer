
undefined8
FUN_00545360(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,undefined *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0040ac10();
  uVar2 = 0;
  local_48 = 0;
  if (-1 < iVar1) {
    if (param_6 == (undefined *)0x0) {
      param_6 = &DAT_00941220;
    }
    uVar2 = FUN_0040ab30(param_1);
    uVar2 = FUN_0053f710(0,&DAT_007d37c9,0,uVar2,0,param_2,(long)param_3,param_4,param_5,param_6,
                         (long)iVar1,&local_48);
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (int)local_48;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

