
undefined8
FUN_0062d960(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,undefined8 *param_5,
            undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == param_4) {
    uVar3 = 0;
  }
  else {
    do {
      if (0x10ffff < *param_3) {
        uVar3 = 2;
        goto LAB_0062d9c6;
      }
      cVar2 = FUN_0062cbc0();
      if (cVar2 == '\0') {
        uVar3 = 1;
        goto LAB_0062d9c6;
      }
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
    uVar3 = 0;
  }
LAB_0062d9c6:
  *param_5 = param_3;
  *param_8 = param_6;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

