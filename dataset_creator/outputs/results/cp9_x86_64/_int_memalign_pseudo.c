
long * _int_memalign(undefined4 *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  
  if (param_3 < 0) {
    plVar3 = (long *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  }
  else {
    uVar6 = param_3 + 0x17U & 0xfffffffffffffff0;
    if (param_3 + 0x17U < 0x20) {
      uVar6 = 0x20;
    }
    plVar3 = (long *)_int_malloc(param_1,uVar6 + 0x20 + param_2);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + -2;
      plVar7 = plVar1;
      if ((ulong)plVar3 % param_2 != 0) {
        plVar7 = (long *)(((long)plVar3 + (param_2 - 1) & -param_2) - 0x10);
        uVar4 = (long)plVar7 - (long)plVar1;
        if (uVar4 < 0x20) {
          plVar7 = (long *)((long)plVar7 + param_2);
          uVar4 = (long)plVar7 - (long)plVar1;
        }
        uVar8 = (plVar3[-1] & 0xfffffffffffffff8U) - uVar4;
        if ((plVar3[-1] & 2U) != 0) {
          *plVar7 = uVar4 + plVar3[-2];
          plVar7[1] = uVar8 | 2;
          return plVar7 + 2;
        }
        uVar5 = (ulong)(param_1 != &main_arena) << 2;
        plVar7[1] = uVar8 | uVar5 | 1;
        puVar2 = (ulong *)((long)plVar7 + uVar8 + 8);
        *puVar2 = *puVar2 | 1;
        plVar3[-1] = uVar4 | (uint)plVar3[-1] & 7 | uVar5;
        _int_free(param_1,plVar1,1);
        if ((uVar8 < uVar6) || (plVar3 = plVar7 + 2, (ulong)plVar3 % param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
          __malloc_assert("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0",
                          "malloc.c",0x1391,"_int_memalign");
        }
      }
      if (((plVar7[1] & 2U) == 0) && (uVar4 = plVar7[1] & 0xfffffffffffffff8, uVar6 + 0x20 < uVar4))
      {
        *(ulong *)((long)plVar7 + uVar6 + 8) =
             uVar4 - uVar6 | (ulong)(param_1 != &main_arena) << 2 | 1;
        plVar7[1] = (uint)plVar7[1] & 7 | uVar6;
        _int_free(param_1,(long)plVar7 + uVar6,1);
      }
    }
  }
  return plVar3;
}

