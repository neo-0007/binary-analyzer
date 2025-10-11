
void FUN_004f90e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004f8b70(local_b8);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8c40(local_b8,param_2,local_138);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8b70(local_b8,local_138);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8c40(local_b8,param_2,local_138);
  iVar1 = 5;
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8b70(local_b8,local_138);
  FUN_004f8d60(local_118,local_b8);
  FUN_004f8b70(local_b8,local_118);
  FUN_004f8d60(local_118,local_b8);
  FUN_004f8b70(local_b8,local_118);
  FUN_004f8d60(local_118,local_b8);
  FUN_004f8c40(local_b8,local_118,local_138);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8b70(local_b8,local_138);
  FUN_004f8d60(local_118,local_b8);
  do {
    FUN_004f8b70(local_b8,local_118);
    FUN_004f8d60(local_118,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0xb;
  FUN_004f8c40(local_b8,local_118,local_138);
  FUN_004f8d60(local_118,local_b8);
  FUN_004f8b70(local_b8,local_118);
  FUN_004f8d60(local_f8,local_b8);
  do {
    FUN_004f8b70(local_b8,local_f8);
    FUN_004f8d60(local_f8,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x17;
  FUN_004f8c40(local_b8,local_f8,local_118);
  FUN_004f8d60(local_118,local_b8);
  FUN_004f8b70(local_b8,local_118);
  FUN_004f8d60(local_f8,local_b8);
  do {
    FUN_004f8b70(local_b8,local_f8);
    FUN_004f8d60(local_f8,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x2f;
  FUN_004f8c40(local_b8,local_f8,local_118);
  FUN_004f8d60(local_f8,local_b8);
  FUN_004f8b70(local_b8,local_f8);
  FUN_004f8d60(local_d8,local_b8);
  do {
    FUN_004f8b70(local_b8,local_d8);
    FUN_004f8d60(local_d8,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x17;
  FUN_004f8c40(local_b8,local_f8,local_d8);
  FUN_004f8d60(local_f8,local_b8);
  FUN_004f8b70(local_b8,local_f8);
  FUN_004f8d60(local_d8,local_b8);
  do {
    FUN_004f8b70(local_b8,local_d8);
    FUN_004f8d60(local_d8,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 6;
  FUN_004f8c40(local_b8,local_118,local_d8);
  FUN_004f8d60(local_118,local_b8);
  do {
    FUN_004f8b70(local_b8,local_118);
    FUN_004f8d60(local_118,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x61;
  FUN_004f8c40(local_b8,local_118,local_138);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8b70(local_b8,local_138);
  FUN_004f8d60(local_138,local_b8);
  FUN_004f8c40(local_b8,local_138,param_2);
  FUN_004f8d60(local_138,local_b8);
  do {
    FUN_004f8b70(local_b8,local_138);
    FUN_004f8d60(local_138,local_b8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_004f8c40(local_b8,local_138,local_f8);
  FUN_004f8d60(param_1,local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

