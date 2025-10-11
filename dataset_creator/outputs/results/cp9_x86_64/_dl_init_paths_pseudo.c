
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_init_paths(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_28 [8];
  
  puVar12 = auStack_28;
  puVar13 = auStack_28;
  puVar11 = auStack_28;
  puVar3 = (undefined8 *)malloc(0x28);
  __rtld_search_dirs = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    pcVar6 = "cannot create search path array";
  }
  else {
    plVar4 = (long *)malloc(0x140);
    *puVar3 = plVar4;
    if (plVar4 != (long *)0x0) {
      puVar3[4] = 0;
      puVar3[1] = plVar4 + 10;
      *plVar4 = (long)(plVar4 + 10);
      puVar3[2] = plVar4 + 0x14;
      plVar4[10] = (long)(plVar4 + 0x14);
      puVar3[3] = plVar4 + 0x1e;
      puVar2 = _dl_ns;
      plVar4[3] = (long)"/lib/x86_64-linux-gnu/";
      plVar4[0xd] = (long)"/usr/lib/x86_64-linux-gnu/";
      _DAT_0092deb8 = 0;
      _dl_all_dirs = plVar4;
      plVar4[1] = (long)"system search path";
      plVar4[2] = 0;
      plVar4[4] = 0x16;
      *(undefined4 *)(plVar4 + 5) = 0;
      plVar4[0xb] = (long)"system search path";
      plVar4[0xc] = 0;
      plVar4[0xe] = 0x1a;
      *(undefined4 *)(plVar4 + 0xf) = 0;
      plVar4[0x15] = (long)"system search path";
      plVar4[0x16] = 0;
      plVar4[0x17] = (long)&DAT_00837852;
      plVar4[0x18] = 5;
      *(undefined4 *)(plVar4 + 0x19) = 0;
      plVar4[0x14] = (long)(plVar4 + 0x1e);
      plVar4[0x1f] = (long)"system search path";
      plVar4[0x20] = 0;
      plVar4[0x21] = (long)"/usr/lib/";
      plVar4[0x22] = 9;
      *(undefined4 *)(plVar4 + 0x23) = 0;
      plVar4[0x1e] = 0;
      max_dirnamelen = 0x1a;
      if ((puVar2[0x31c] & 3) == 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("l->l_type != lt_loaded","dl-load.c",0x313,"_dl_init_paths");
      }
      if (*(long *)(puVar2 + 0x128) == 0) {
        *(undefined8 *)(puVar2 + 0x3c0) = 0xffffffffffffffff;
        if (*(long *)(puVar2 + 0xb8) == 0) {
          *(undefined8 *)(puVar2 + 0x330) = 0xffffffffffffffff;
        }
        else {
          lVar8 = 0;
          if ((puVar2[0x31e] & 0x20) != 0) {
            lVar8 = *(long *)puVar2;
          }
          decompose_rpath(puVar2 + 0x330,
                          *(long *)(*(long *)(puVar2 + 0x68) + 8) +
                          *(long *)(*(long *)(puVar2 + 0xb8) + 8) + lVar8,puVar2,"RPATH");
          *(undefined4 *)(puVar2 + 0x338) = 0;
        }
      }
      else {
        lVar8 = 0;
        if ((puVar2[0x31e] & 0x20) != 0) {
          lVar8 = *(long *)puVar2;
        }
        decompose_rpath(puVar2 + 0x3c0,
                        *(long *)(*(long *)(puVar2 + 0x68) + 8) +
                        *(long *)(*(long *)(puVar2 + 0x128) + 8) + lVar8,puVar2,"RUNPATH");
        *(undefined4 *)(puVar2 + 0x3c8) = 0;
        *(undefined8 *)(puVar2 + 0x330) = 0xffffffffffffffff;
      }
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        __rtld_env_path_list = (long *)0xffffffffffffffff;
        return;
      }
      sVar5 = strlen(param_1);
      for (; puVar11 != auStack_28 + -(sVar5 + 0x18 & 0xfffffffffffff000);
          puVar11 = puVar11 + -0x1000) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      uVar9 = (ulong)((uint)(sVar5 + 0x18) & 0xff0);
      lVar8 = -uVar9;
      puVar13 = puVar11 + lVar8;
      if (uVar9 != 0) {
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      }
      *(undefined8 *)(puVar11 + lVar8 + -8) = 0x7acc2b;
      pcVar6 = (char *)memcpy((void *)((ulong)(puVar11 + lVar8 + 0xf) & 0xfffffffffffffff0),param_1,
                              sVar5 + 1);
      cVar1 = *pcVar6;
      if (cVar1 == '\0') {
        sVar5 = 0x10;
      }
      else {
        lVar7 = 1;
        pcVar10 = pcVar6;
        do {
          lVar7 = lVar7 + (ulong)((byte)(cVar1 - 0x3aU) < 2);
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        sVar5 = lVar7 * 8 + 8;
      }
      *(undefined8 *)(puVar11 + lVar8 + -8) = 0x7acc6a;
      __rtld_env_path_list = (long *)malloc(sVar5);
      if (__rtld_env_path_list != (long *)0x0) {
        *(undefined8 *)(puVar11 + lVar8 + -8) = 0x7acc95;
        fillin_rpath_isra_0(pcVar6,__rtld_env_path_list,&DAT_0083721f,param_2,0,puVar2);
        if (*__rtld_env_path_list == 0) {
          *(undefined8 *)(puVar11 + lVar8 + -8) = 0x7acce0;
          free(__rtld_env_path_list);
          __rtld_env_path_list = (long *)0xffffffffffffffff;
        }
        _DAT_0092dec8 = 0;
        return;
      }
    }
    pcVar6 = "cannot create cache for search path";
    puVar12 = puVar13;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar12 + -8) = 0x7acd0c;
  _dl_signal_error(0xc,0,0,pcVar6);
}

