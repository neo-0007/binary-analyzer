
undefined8 FUN_004aa2d0(long *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar1 = *param_1;
  *param_3 = 0;
  do {
    lVar2 = lVar1;
    if (lVar1 == 0) {
      return 1;
    }
    while (lVar1 = *(long *)(lVar2 + 0x28), *(int *)(lVar2 + 0x24) == 0) {
      puVar3 = param_2;
      if (param_2 != (undefined4 *)0x0) {
        puVar3 = param_2 + 1;
        *param_2 = *(undefined4 *)(lVar2 + 8);
      }
      *param_3 = *param_3 + 1;
      lVar2 = lVar1;
      param_2 = puVar3;
      if (lVar1 == 0) {
        return 1;
      }
    }
  } while( true );
}

