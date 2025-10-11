
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b62b0(char *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_28 [8];
  
  puVar11 = auStack_28;
  puVar12 = auStack_28;
  puVar10 = auStack_28;
  puVar4 = (undefined8 *)FUN_007101b0(0x28);
  DAT_0093aeb0 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    pcVar7 = "cannot create search path array";
  }
  else {
    plVar5 = (long *)FUN_007101b0(0x140);
    *puVar4 = plVar5;
    if (plVar5 != (long *)0x0) {
      puVar4[4] = 0;
      puVar4[1] = plVar5 + 10;
      *plVar5 = (long)(plVar5 + 10);
      puVar4[2] = plVar5 + 0x14;
      plVar5[10] = (long)(plVar5 + 0x14);
      puVar4[3] = plVar5 + 0x1e;
      puVar3 = PTR_DAT_0093eb60;
      plVar5[3] = (long)"/lib/x86_64-linux-gnu/";
      plVar5[0xd] = (long)"/usr/lib/x86_64-linux-gnu/";
      _DAT_0093aeb8 = 0;
      DAT_0094ae90 = plVar5;
      plVar5[1] = (long)"system search path";
      plVar5[2] = 0;
      plVar5[4] = 0x16;
      *(undefined4 *)(plVar5 + 5) = 0;
      plVar5[0xb] = (long)"system search path";
      plVar5[0xc] = 0;
      plVar5[0xe] = 0x1a;
      *(undefined4 *)(plVar5 + 0xf) = 0;
      plVar5[0x15] = (long)"system search path";
      plVar5[0x16] = 0;
      plVar5[0x17] = (long)"/lib/";
      plVar5[0x18] = 5;
      *(undefined4 *)(plVar5 + 0x19) = 0;
      plVar5[0x14] = (long)(plVar5 + 0x1e);
      plVar5[0x1f] = (long)"system search path";
      plVar5[0x20] = 0;
      plVar5[0x21] = (long)"/usr/lib/";
      plVar5[0x22] = 9;
      *(undefined4 *)(plVar5 + 0x23) = 0;
      plVar5[0x1e] = 0;
      DAT_0094b410 = 0x1a;
      if ((puVar3[0x31c] & 3) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("l->l_type != lt_loaded","dl-load.c",0x313,"_dl_init_paths");
      }
      if (*(long *)(puVar3 + 0x128) == 0) {
        *(undefined8 *)(puVar3 + 0x3c0) = 0xffffffffffffffff;
        if (*(long *)(puVar3 + 0xb8) == 0) {
          *(undefined8 *)(puVar3 + 0x330) = 0xffffffffffffffff;
        }
        else {
          lVar6 = 0;
          if ((puVar3[0x31e] & 0x20) != 0) {
            lVar6 = *(long *)puVar3;
          }
          FUN_007b60e0(puVar3 + 0x330,
                       *(long *)(*(long *)(puVar3 + 0x68) + 8) +
                       *(long *)(*(long *)(puVar3 + 0xb8) + 8) + lVar6,puVar3,"RPATH");
          *(undefined4 *)(puVar3 + 0x338) = 0;
        }
      }
      else {
        lVar6 = 0;
        if ((puVar3[0x31e] & 0x20) != 0) {
          lVar6 = *(long *)puVar3;
        }
        FUN_007b60e0(puVar3 + 0x3c0,
                     *(long *)(*(long *)(puVar3 + 0x68) + 8) +
                     *(long *)(*(long *)(puVar3 + 0x128) + 8) + lVar6,puVar3,"RUNPATH");
        *(undefined4 *)(puVar3 + 0x3c8) = 0;
        *(undefined8 *)(puVar3 + 0x330) = 0xffffffffffffffff;
      }
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        DAT_0093aec0 = (long *)0xffffffffffffffff;
        return;
      }
      lVar6 = thunk_FUN_007129d0(param_1);
      for (; puVar10 != auStack_28 + -(lVar6 + 0x18U & 0xfffffffffffff000);
          puVar10 = puVar10 + -0x1000) {
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      }
      uVar8 = (ulong)((uint)(lVar6 + 0x18U) & 0xff0);
      lVar2 = -uVar8;
      puVar12 = puVar10 + lVar2;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      }
      *(undefined8 *)(puVar10 + lVar2 + -8) = 0x7b656b;
      pcVar7 = (char *)thunk_FUN_00713a50((ulong)(puVar10 + lVar2 + 0xf) & 0xfffffffffffffff0,
                                          param_1,lVar6 + 1);
      cVar1 = *pcVar7;
      if (cVar1 == '\0') {
        lVar6 = 0x10;
      }
      else {
        lVar6 = 1;
        pcVar9 = pcVar7;
        do {
          lVar6 = lVar6 + (ulong)((byte)(cVar1 - 0x3aU) < 2);
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        lVar6 = lVar6 * 8 + 8;
      }
      *(undefined8 *)(puVar10 + lVar2 + -8) = 0x7b65aa;
      DAT_0093aec0 = (long *)FUN_007101b0(lVar6);
      if (DAT_0093aec0 != (long *)0x0) {
        *(undefined8 *)(puVar10 + lVar2 + -8) = 0x7b65d5;
        FUN_007b5e70(pcVar7,DAT_0093aec0,&DAT_0084143f,param_2,0,puVar3);
        if (*DAT_0093aec0 == 0) {
          *(undefined8 *)(puVar10 + lVar2 + -8) = 0x7b6620;
          FUN_007104f0();
          DAT_0093aec0 = (long *)0xffffffffffffffff;
        }
        _DAT_0093aec8 = 0;
        return;
      }
    }
    pcVar7 = "cannot create cache for search path";
    puVar11 = puVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar11 + -8) = 0x7b664c;
  FUN_0078db10(0xc,0,0,pcVar7);
}

