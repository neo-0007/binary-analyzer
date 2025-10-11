
void FUN_006b9200(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = thunk_FUN_007129d0(param_2);
  if (lVar3 != 0) {
    puVar1 = param_2 + lVar3;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      uVar2 = *param_2;
      if (lVar3 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar4 = 1;
        lVar3 = 0;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      param_2 = param_2 + 1;
      *(long *)(param_1 + 0x100) = lVar4;
      *(undefined1 *)(param_1 + lVar3) = uVar2;
      *(undefined1 *)(param_1 + 0x108) = uVar2;
      lVar3 = lVar4;
    } while (param_2 != puVar1);
  }
  return;
}

