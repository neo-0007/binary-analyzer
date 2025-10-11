
undefined8
BIO_ADDR_rawmake(undefined1 (*param_1) [16],int param_2,char *param_3,long param_4,
                undefined2 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_2 == 1) {
    if (param_4 + 1U < 0x6d) {
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(param_1[6] + 6) = 0;
      puVar3 = (undefined8 *)((ulong)(*param_1 + 8) & 0xfffffffffffffff8);
      uVar2 = (ulong)(((int)param_1 - (int)puVar3) + 0x6eU >> 3);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)*param_1 = 1;
      strncpy(*param_1 + 2,param_3,0x6b);
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if ((param_2 == 10) && (param_4 == 0x10)) {
        *(undefined8 *)param_1[1] = 0;
        *param_1 = (undefined1  [16])0x0;
        *(undefined4 *)(param_1[1] + 8) = 0;
        *(undefined2 *)*param_1 = 10;
        *(undefined2 *)(*param_1 + 2) = param_5;
        uVar1 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_3;
        *(undefined8 *)param_1[1] = uVar1;
        return 1;
      }
      return 0;
    }
    if (param_4 == 4) {
      *param_1 = (undefined1  [16])0x0;
      *(undefined2 *)*param_1 = 2;
      *(undefined2 *)(*param_1 + 2) = param_5;
      *(undefined4 *)(*param_1 + 4) = *(undefined4 *)param_3;
      return 1;
    }
  }
  return 0;
}

