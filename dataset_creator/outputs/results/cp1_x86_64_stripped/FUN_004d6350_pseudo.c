
uint FUN_004d6350(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  if (param_2 == 2) {
    return 1;
  }
  if (0xf < param_2 - 0x1001U) {
    return 0xfffffffe;
  }
  switch(param_2) {
  case 0x1002:
    if (puVar1[2] == 0) {
      puVar1[1] = param_3;
      return 1;
    }
    break;
  case 0x1003:
    if (2 < param_3 - 1) {
      return 0xfffffffe;
    }
    goto LAB_004d63cc;
  case 0x1004:
    if (puVar1[2] != 0) {
      puVar1[3] = param_3;
      return 1;
    }
    break;
  case 0x1005:
    if (param_3 < 3) {
      puVar1[2] = param_3;
      return 1;
    }
    break;
  case 0x1006:
    if (param_3 == 0xfffffffe) {
      return (int)(char)puVar1[0xb];
    }
    if (param_3 - 1 < 2) {
      *(char *)(puVar1 + 0xb) = (char)param_3;
      return 1;
    }
    break;
  case 0x1007:
    *(undefined8 **)(puVar1 + 0xe) = param_4;
    return 1;
  case 0x1008:
    *param_4 = *(undefined8 *)(puVar1 + 0xe);
    return 1;
  case 0x1009:
    if (0 < (int)param_3) {
      *(long *)(puVar1 + 0x14) = (long)(int)param_3;
      return 1;
    }
    break;
  case 0x100a:
    *(int *)param_4 = (int)*(undefined8 *)(puVar1 + 0x14);
    return 1;
  case 0x100b:
    FUN_0041ad60(*(undefined8 *)(puVar1 + 0x10),"../crypto/dh/dh_pmeth.c",0xc5);
    *(undefined8 **)(puVar1 + 0x10) = param_4;
    if (param_4 == (undefined8 *)0x0) {
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      return 1;
    }
    *(long *)(puVar1 + 0x12) = (long)(int)param_3;
    return 1;
  case 0x100c:
    *param_4 = *(undefined8 *)(puVar1 + 0x10);
    return puVar1[0x12];
  case 0x100d:
    FUN_004a06b0(*(undefined8 *)(puVar1 + 0xc));
    *(undefined8 **)(puVar1 + 0xc) = param_4;
    return 1;
  case 0x100e:
    *param_4 = *(undefined8 *)(puVar1 + 0xc);
    return 1;
  case 0x100f:
    if ((int)param_3 < 1) {
      return 0xfffffffe;
    }
LAB_004d63cc:
    if (puVar1[8] == 0) {
      puVar1[8] = param_3;
      return 1;
    }
    break;
  case 0x1010:
    puVar1[4] = param_3;
    return 1;
  default:
    if (0xff < (int)param_3) {
      *puVar1 = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}

