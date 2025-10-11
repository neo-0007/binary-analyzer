
bool FUN_0041ef80(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return false;
  }
  puVar3 = (undefined8 *)FUN_00417730(param_1,0x12,&DAT_008de0c0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_2;
    iVar2 = *param_3;
    while (iVar2 != 0) {
      if (iVar2 == 4) {
        puVar3[3] = *(undefined8 *)(param_3 + 2);
      }
      else if (iVar2 - 0x69U < 7) {
        switch(iVar2) {
        case 0x6a:
          puVar3[5] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6b:
          puVar3[6] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6c:
          puVar3[7] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6d:
          puVar3[8] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6e:
          puVar3[9] = *(undefined8 *)(param_3 + 2);
          break;
        case 0x6f:
          puVar3[10] = *(undefined8 *)(param_3 + 2);
          break;
        default:
          puVar3[4] = *(undefined8 *)(param_3 + 2);
        }
      }
      piVar1 = param_3 + 4;
      param_3 = param_3 + 4;
      iVar2 = *piVar1;
    }
    if ((((puVar3[3] != 0) && (puVar3[4] != 0)) && (puVar3[6] != 0)) &&
       (((puVar3[7] != 0 && (puVar3[8] != 0)) && ((puVar3[9] != 0 && (puVar3[10] != 0)))))) {
      lVar4 = FUN_00422240();
      puVar3[2] = lVar4;
      if (lVar4 != 0) {
        iVar2 = (*(code *)puVar3[4])(*puVar3,FUN_0041ee00,FUN_0041ed60,FUN_0041ed40,param_1);
        return iVar2 != 0;
      }
    }
  }
  return false;
}

