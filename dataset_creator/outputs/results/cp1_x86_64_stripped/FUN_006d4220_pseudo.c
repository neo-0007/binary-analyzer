
undefined8 FUN_006d4220(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  LOCK();
  bVar7 = DAT_009460b0 == 0;
  if (bVar7) {
    DAT_009460b0 = 1;
  }
  UNLOCK();
  if (!bVar7) {
    FUN_00709590(&DAT_009460b0);
  }
  lVar4 = param_2 + -1;
  if (param_2 != 0) {
    plVar3 = (long *)(param_1 + -0x68 + param_2 * 0x68);
    do {
      lVar5 = *plVar3;
      if (lVar5 == 0) {
        if (plVar3[8] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("step->__end_fct == NULL","gconv_db.c",0xe1,"__gconv_release_step");
        }
      }
      else {
        plVar1 = plVar3 + 2;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          pcVar6 = (code *)(((ulong)plVar3[8] >> 0x11 | plVar3[8] << 0x2f) ^
                           *(ulong *)(in_FS_OFFSET + 0x30));
          if (pcVar6 != (code *)0x0) {
            FUN_0078e430(pcVar6);
            (*pcVar6)(plVar3);
            lVar5 = *plVar3;
          }
          FUN_006de4d0(lVar5);
          *plVar3 = 0;
        }
      }
      lVar4 = lVar4 + -1;
      plVar3 = plVar3 + -0xd;
    } while (lVar4 != -1);
  }
  FUN_006de230(param_1,param_2);
  iVar2 = DAT_009460b0;
  LOCK();
  DAT_009460b0 = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(&DAT_009460b0);
  }
  return 0;
}

