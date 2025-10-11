
undefined8
FUN_005b23c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_40;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = FUN_0043c1d0(*(undefined8 *)(param_1 + 8));
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0xd3,"get_entropy");
    FUN_0051f8f0(0x39,0xbb,0);
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_005b2220(param_1,&local_34);
    if (iVar2 != 0) {
      if (local_34 < *(uint *)(local_40 + 0x80)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg.c",0xdd,"get_entropy");
        FUN_0051f8f0(0x39,0xc2,0);
      }
      else {
        iVar2 = FUN_005b2040();
        if (iVar2 != 0) {
          uVar3 = (**(code **)(local_40 + 0x60))
                            (*(undefined8 *)(local_40 + 0x30),param_2,
                             *(undefined4 *)(local_40 + 0x80),param_4,param_5,param_6);
          if ((*(long *)(local_40 + 0x30) != 0) &&
             (pcVar1 = *(code **)(local_40 + 0x48), pcVar1 != (code *)0x0)) {
            (*pcVar1)(*(long *)(local_40 + 0x30),8,pcVar1,&local_40);
          }
          goto LAB_005b24b2;
        }
      }
    }
    uVar3 = 0;
  }
LAB_005b24b2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

