
void * _nl_intern_locale_data(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  void *__ptr;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  if (7 < param_3) {
    uVar1 = 0x20051017;
    if ((param_1 != 3) && (uVar1 = param_1 ^ 0x20031115, param_1 == 0)) {
      uVar1 = 0x20090720;
    }
    if (*param_2 == uVar1) {
      lVar5 = (long)(int)param_1;
      uVar1 = param_2[1];
      uVar4 = (ulong)uVar1;
      if ((*(ulong *)(_nl_category_num_items + lVar5 * 8) <= uVar4) && (uVar4 * 4 + 8 < param_3)) {
        __ptr = malloc(uVar4 * 8 + 0x40);
        if (__ptr == (void *)0x0) {
          return (void *)0x0;
        }
        *(uint **)((long)__ptr + 8) = param_2;
        *(ulong *)((long)__ptr + 0x10) = param_3;
        *(undefined8 *)((long)__ptr + 0x20) = 0;
        *(undefined8 *)((long)__ptr + 0x28) = 0;
        *(undefined8 *)((long)__ptr + 0x30) = 0;
        *(uint *)((long)__ptr + 0x38) = uVar1;
        if (uVar4 == 0) {
          return __ptr;
        }
        uVar2 = 0;
LAB_006d6487:
        uVar3 = (ulong)param_2[uVar2 + 2];
        if (param_3 < uVar3) goto LAB_006d64c0;
        switch(param_1) {
        default:
          if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("category == LC_CTYPE","loadlocale.c",0x8f,"_nl_intern_locale_data");
          }
          if (uVar2 < 0x56) {
LAB_006d6500:
            if (*(int *)(*(long *)(_nl_value_types + lVar5 * 8) + uVar2 * 4) == 5)
            goto LAB_006d6540;
          }
LAB_006d650a:
          *(ulong *)((long)__ptr + uVar2 * 8 + 0x40) = uVar3 + (long)param_2;
LAB_006d6512:
          uVar2 = uVar2 + 1;
          if (uVar4 == uVar2) {
            return __ptr;
          }
          goto LAB_006d6487;
        case 1:
          if (uVar2 < 6) goto LAB_006d6500;
          break;
        case 2:
          if (uVar2 < 0x9f) goto LAB_006d6500;
          break;
        case 3:
          if (uVar2 < 0x13) goto LAB_006d6500;
          break;
        case 4:
          if (uVar2 < 0x2e) goto LAB_006d6500;
          break;
        case 5:
        case 10:
          if (uVar2 < 5) goto LAB_006d6500;
          break;
        case 7:
          if (uVar2 < 3) goto LAB_006d6500;
          break;
        case 8:
          if (uVar2 < 7) goto LAB_006d6500;
          break;
        case 9:
          if (uVar2 < 0xd) {
            if (*(int *)(*(long *)(_nl_value_types + lVar5 * 8) + uVar2 * 4) != 5)
            goto LAB_006d650a;
LAB_006d6540:
            if ((param_2[uVar2 + 2] & 3) == 0) {
              *(undefined4 *)((long)__ptr + uVar2 * 8 + 0x40) =
                   *(undefined4 *)((long)param_2 + uVar3);
              goto LAB_006d6512;
            }
          }
          break;
        case 0xb:
          if (uVar2 < 2) goto LAB_006d6500;
          break;
        case 0xc:
          if (uVar2 < 0x10) goto LAB_006d6500;
        }
LAB_006d64c0:
        free(__ptr);
      }
    }
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return (void *)0x0;
}

