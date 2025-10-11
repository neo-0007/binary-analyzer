
void FUN_0075a700(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar6 = (undefined **)ppuVar1[5];
  if ((ppuVar6 == (undefined **)0x0) && (ppuVar6 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0))
  {
    FUN_0075a340(ppuVar1);
    ppuVar6 = (undefined **)ppuVar1[5];
  }
  puVar3 = ppuVar6[1];
  *param_1 = (long)*ppuVar6;
  param_1[1] = (long)puVar3;
  puVar3 = ppuVar6[3];
  param_1[2] = (long)ppuVar6[2];
  param_1[3] = (long)puVar3;
  LOCK();
  bVar7 = DAT_009460b0 == 0;
  if (bVar7) {
    DAT_009460b0 = 1;
  }
  UNLOCK();
  if (!bVar7) {
    FUN_00709590(&DAT_009460b0);
  }
  plVar2 = (long *)*param_1;
  bVar7 = false;
  if (*plVar2 != 0) {
    bVar7 = SCARRY4((int)plVar2[2],1);
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  plVar2 = (long *)param_1[2];
  if (*plVar2 != 0) {
    lVar4 = plVar2[2];
    *(int *)(plVar2 + 2) = (int)lVar4 + 1;
    bVar7 = (bool)(bVar7 | SCARRY4((int)lVar4,1));
  }
  iVar5 = DAT_009460b0;
  LOCK();
  DAT_009460b0 = 0;
  UNLOCK();
  if (1 < iVar5) {
    FUN_00709660(&DAT_009460b0);
  }
  if (bVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00703110("Fatal glibc error: gconv module reference counter overflow\n");
  }
  return;
}

