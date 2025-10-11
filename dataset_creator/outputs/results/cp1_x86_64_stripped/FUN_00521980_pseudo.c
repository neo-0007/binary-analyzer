
uint * FUN_00521980(uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + param_3 * 0x10;
  do {
    uVar2 = param_2[1];
    if ((((uVar2 == 0xffffffff) == (param_2[2] == 0xffffffff)) &&
        ((param_2[3] == 0xffffffff || ((param_2[3] & param_1[3]) != 0)))) &&
       ((uVar2 == 0xffffffff || ((uVar2 == param_1[1] || (param_2[2] == param_1[2])))))) {
      if (param_1[4] == 0) {
        if (*(long *)(param_1 + 6) == 0) {
          if (*(long *)(param_1 + 10) == 0) {
            return (uint *)0x0;
          }
          if ((*param_2 == 0) || (*param_2 == *param_1)) {
            if (*(long *)(param_2 + 10) == 0) {
              return param_2;
            }
            iVar3 = FUN_0041c9c0();
            if (iVar3 == 0) {
              return param_2;
            }
          }
        }
        else if ((*param_2 & 0xfffffffd) == 0) {
          if ((*(long *)(param_2 + 6) != 0) && (iVar3 = FUN_0041c9c0(), iVar3 == 0)) {
            uVar5 = *(undefined8 *)(param_1 + 6);
            uVar4 = 0;
LAB_00521a5e:
            *(undefined8 *)(param_1 + 8) = uVar4;
            *(undefined8 *)(param_1 + 6) = uVar5;
            return param_2;
          }
          if ((*(long *)(param_2 + 8) != 0) &&
             (iVar3 = FUN_0041c9c0(*(undefined8 *)(param_1 + 8)), iVar3 == 0)) {
            uVar4 = *(undefined8 *)(param_1 + 8);
            uVar5 = 0;
            goto LAB_00521a5e;
          }
        }
      }
      else if (param_1[4] == param_2[4]) {
        return param_2;
      }
    }
    param_2 = param_2 + 0x10;
    if (param_2 == puVar1) {
      return (uint *)0x0;
    }
  } while( true );
}

