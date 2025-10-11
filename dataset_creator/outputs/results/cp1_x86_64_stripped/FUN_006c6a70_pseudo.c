
undefined4 FUN_006c6a70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_0067ca70(param_3);
  uVar3 = FUN_006e0b30(0xe,*(undefined8 *)(lVar2 + 0x10));
  FUN_006e27b0(*param_2,uVar3);
  uVar3 = FUN_006c47a0();
  FUN_00625160(auStack_38,param_3);
                    /* try { // try from 006c6ad4 to 006c6ad8 has its CatchHandler @ 006c6b07 */
  uVar1 = FUN_006c49c0(uVar3,*param_2,auStack_38);
  FUN_00625980(auStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

