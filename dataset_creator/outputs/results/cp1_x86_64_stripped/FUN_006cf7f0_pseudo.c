
long FUN_006cf7f0(int *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  FUN_0070a340(&DAT_009457e0);
  if (DAT_00945818 != 0) {
    plVar4 = &DAT_00945818;
    lVar2 = DAT_00945818;
    do {
      lVar1 = *(long *)(lVar2 + 0x28);
      if (param_1 == *(int **)(lVar2 + 0x18)) {
        *plVar4 = lVar1;
        goto LAB_006cf85d;
      }
      plVar4 = (long *)(lVar2 + 0x28);
      lVar2 = lVar1;
    } while (lVar1 != 0);
  }
  if (DAT_00945810 != 0) {
    puVar3 = &DAT_00945810;
    lVar2 = DAT_00945810;
    do {
      if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
        if (param_1 == *(int **)(lVar2 + 0x18)) {
          *puVar3 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_006cf85d;
        }
      }
      else if (param_1 == *(int **)*(int **)(lVar2 + 0x18)) {
        *puVar3 = *(undefined8 *)(lVar2 + 0x28);
        FUN_007104f0();
LAB_006cf85d:
        FUN_0070abb0(&DAT_009457e0);
        return lVar2;
      }
      puVar3 = (undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x28);
    } while (lVar2 != 0);
  }
  FUN_0070abb0(&DAT_009457e0);
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

