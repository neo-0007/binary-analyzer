
void d_print_expr_op(long param_1,undefined8 param_2,int *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  if (*param_3 != 0x32) {
    d_print_comp(param_1,0x11);
    return;
  }
  lVar4 = (long)*(int *)(*(long *)(param_3 + 4) + 0x10);
  puVar3 = *(undefined1 **)(*(long *)(param_3 + 4) + 8);
  if (lVar4 != 0) {
    puVar5 = puVar3 + lVar4;
    lVar4 = *(long *)(param_1 + 0x100);
    do {
      uVar1 = *puVar3;
      if (lVar4 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar2 = 1;
        lVar4 = 0;
      }
      else {
        lVar2 = lVar4 + 1;
      }
      puVar3 = puVar3 + 1;
      *(long *)(param_1 + 0x100) = lVar2;
      *(undefined1 *)(param_1 + lVar4) = uVar1;
      *(undefined1 *)(param_1 + 0x108) = uVar1;
      lVar4 = lVar2;
    } while (puVar3 != puVar5);
  }
  return;
}

