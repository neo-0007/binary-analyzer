
long FUN_006dfdd0(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (7 < param_3) {
    uVar1 = 0x20051017;
    if ((param_1 != 3) && (uVar1 = param_1 ^ 0x20031115, param_1 == 0)) {
      uVar1 = 0x20090720;
    }
    if (*param_2 == uVar1) {
      lVar6 = (long)(int)param_1;
      uVar1 = param_2[1];
      uVar5 = (ulong)uVar1;
      if ((*(ulong *)(&DAT_008241c0 + lVar6 * 8) <= uVar5) && (uVar5 * 4 + 8 < param_3)) {
        lVar2 = FUN_007101b0(uVar5 * 8 + 0x40);
        if (lVar2 == 0) {
          return 0;
        }
        *(uint **)(lVar2 + 8) = param_2;
        *(ulong *)(lVar2 + 0x10) = param_3;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(uint *)(lVar2 + 0x38) = uVar1;
        if (uVar5 == 0) {
          return lVar2;
        }
        uVar3 = 0;
LAB_006dfe97:
        uVar4 = (ulong)param_2[uVar3 + 2];
        if (param_3 < uVar4) goto LAB_006dfed0;
        switch(param_1) {
        default:
          if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("category == LC_CTYPE","loadlocale.c",0x8f,"_nl_intern_locale_data");
          }
          if (uVar3 < 0x56) {
LAB_006dff10:
            if (*(int *)((&PTR_DAT_009190e0)[lVar6] + uVar3 * 4) == 5) goto LAB_006dff50;
          }
LAB_006dff1a:
          *(ulong *)(lVar2 + 0x40 + uVar3 * 8) = uVar4 + (long)param_2;
LAB_006dff22:
          uVar3 = uVar3 + 1;
          if (uVar5 == uVar3) {
            return lVar2;
          }
          goto LAB_006dfe97;
        case 1:
          if (uVar3 < 6) goto LAB_006dff10;
          break;
        case 2:
          if (uVar3 < 0x9f) goto LAB_006dff10;
          break;
        case 3:
          if (uVar3 < 0x13) goto LAB_006dff10;
          break;
        case 4:
          if (uVar3 < 0x2e) goto LAB_006dff10;
          break;
        case 5:
        case 10:
          if (uVar3 < 5) goto LAB_006dff10;
          break;
        case 7:
          if (uVar3 < 3) goto LAB_006dff10;
          break;
        case 8:
          if (uVar3 < 7) goto LAB_006dff10;
          break;
        case 9:
          if (uVar3 < 0xd) {
            if (*(int *)((&PTR_DAT_009190e0)[lVar6] + uVar3 * 4) != 5) goto LAB_006dff1a;
LAB_006dff50:
            if ((param_2[uVar3 + 2] & 3) == 0) {
              *(undefined4 *)(lVar2 + 0x40 + uVar3 * 8) = *(undefined4 *)((long)param_2 + uVar4);
              goto LAB_006dff22;
            }
          }
          break;
        case 0xb:
          if (uVar3 < 2) goto LAB_006dff10;
          break;
        case 0xc:
          if (uVar3 < 0x10) goto LAB_006dff10;
        }
LAB_006dfed0:
        FUN_007104f0(lVar2);
      }
    }
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0;
}

