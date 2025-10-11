
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__locale_t newlocale(int __category_mask,char *__locale,__locale_t __base)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  char **ppcVar7;
  __locale_t *pp_Var8;
  __locale_t *pp_Var10;
  __locale_t *pp_Var11;
  __locale_data *p_Var12;
  __locale_t __dest;
  uint uVar13;
  __locale_t p_Var14;
  ulong uVar15;
  long lVar16;
  __locale_t p_Var17;
  long in_FS_OFFSET;
  int *piVar18;
  __locale_t local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  __locale_t local_210;
  __locale_t local_208;
  __locale_t local_200;
  __locale_t local_1f8;
  __locale_t local_1f0;
  __locale_t local_1e8;
  __locale_t local_1e0;
  __locale_t local_1d8;
  __locale_t local_1d0;
  __locale_t local_1c8;
  __locale_data *p_Stack_1c0;
  __locale_t local_1b8;
  __locale_t local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  __locale_struct local_198;
  int *piStack_b0;
  char *local_a8 [13];
  long local_40;
  __locale_t *pp_Var9;
  
  pp_Var9 = &local_278;
  pp_Var8 = &local_278;
  pp_Var11 = &local_278;
  local_1b0 = (__locale_t)CONCAT44(local_1b0._4_4_,__category_mask);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__category_mask != 0x40) {
    pp_Var10 = &local_278;
    if ((__category_mask & 0xffffe040U) == 0) goto LAB_006d7301;
LAB_006d7969:
    puVar2 = (undefined1 *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    goto LAB_006d7502;
  }
  local_1b0 = (__locale_t)CONCAT44(local_1b0._4_4_,0x1fbf);
LAB_006d7301:
  pp_Var10 = &local_278;
  if (__locale == (char *)0x0) goto LAB_006d7969;
  if (__base == (__locale_t)_nl_C_locobj) {
    __base = (__locale_t)0x0;
LAB_006d7533:
    puVar2 = _nl_C_locobj;
    pp_Var10 = &local_278;
    if (((uint)local_1b0 == 0) ||
       ((*__locale == 'C' && (pp_Var10 = &local_278, __locale[1] == '\0')))) goto LAB_006d7502;
    if (__base == (__locale_t)0x0) {
      local_198.__ctype_tolower = (int *)_nl_C_locobj._0_8_;
      local_198.__ctype_toupper = (int *)_nl_C_locobj._8_8_;
      local_198.__names[0] = (char *)_nl_C_locobj._16_8_;
      local_198.__names[1] = (char *)_nl_C_locobj._24_8_;
      local_198.__names[2] = (char *)_nl_C_locobj._32_8_;
      local_198.__names[3] = (char *)_nl_C_locobj._40_8_;
      local_198.__names[4] = (char *)_nl_C_locobj._48_8_;
      local_198.__names[5] = (char *)_nl_C_locobj._56_8_;
      local_198.__names[6] = (char *)_nl_C_locobj._64_8_;
      local_198.__names[7] = (char *)_nl_C_locobj._72_8_;
      local_198.__names[8] = (char *)_nl_C_locobj._80_8_;
      local_198.__names[9] = (char *)_nl_C_locobj._88_8_;
      local_198.__names[10] = (char *)_nl_C_locobj._96_8_;
      local_198.__names[0xb] = (char *)_nl_C_locobj._104_8_;
      local_a8[0xc] = (char *)_nl_C_locobj._224_8_;
      local_198.__names[0xc] = (char *)_nl_C_locobj._112_8_;
      piStack_b0 = (int *)_nl_C_locobj._120_8_;
      local_a8[0] = (char *)_nl_C_locobj._128_8_;
      local_a8[1] = (char *)_nl_C_locobj._136_8_;
      local_a8[2] = (char *)_nl_C_locobj._144_8_;
      local_a8[3] = (char *)_nl_C_locobj._152_8_;
      local_a8[4] = (char *)_nl_C_locobj._160_8_;
      local_a8[5] = (char *)_nl_C_locobj._168_8_;
      local_a8[6] = (char *)_nl_C_locobj._176_8_;
      local_a8[7] = (char *)_nl_C_locobj._184_8_;
      local_a8[8] = (char *)_nl_C_locobj._192_8_;
      local_a8[9] = (char *)_nl_C_locobj._200_8_;
      local_a8[10] = (char *)_nl_C_locobj._208_8_;
      local_a8[0xb] = (char *)_nl_C_locobj._216_8_;
    }
    else {
      local_198.__ctype_tolower = (int *)__base->__locales[0];
      local_198.__ctype_toupper = (int *)__base->__locales[1];
      local_198.__names[0] = (char *)__base->__locales[2];
      local_198.__names[1] = (char *)__base->__locales[3];
      local_198.__names[2] = (char *)__base->__locales[4];
      local_198.__names[3] = (char *)__base->__locales[5];
      local_198.__names[10] = (char *)__base->__locales[0xc];
      local_198.__names[0xb] = (char *)__base->__ctype_b;
      local_198.__names[4] = (char *)__base->__locales[6];
      local_198.__names[5] = (char *)__base->__locales[7];
      local_198.__names[0xc] = (char *)__base->__ctype_tolower;
      piStack_b0 = __base->__ctype_toupper;
      local_198.__names[6] = (char *)__base->__locales[8];
      local_198.__names[7] = (char *)__base->__locales[9];
      local_a8[0] = __base->__names[0];
      local_a8[1] = __base->__names[1];
      local_198.__names[8] = (char *)__base->__locales[10];
      local_198.__names[9] = (char *)__base->__locales[0xb];
      local_a8[2] = __base->__names[2];
      local_a8[3] = __base->__names[3];
      local_a8[0xc] = __base->__names[0xc];
      local_a8[4] = __base->__names[4];
      local_a8[5] = __base->__names[5];
      local_a8[6] = __base->__names[6];
      local_a8[7] = __base->__names[7];
      local_a8[8] = __base->__names[8];
      local_a8[9] = __base->__names[9];
      local_a8[10] = __base->__names[10];
      local_a8[0xb] = __base->__names[0xb];
    }
LAB_006d7629:
    local_1a8 = 0;
    local_1a0 = 0;
    local_1c8 = (__locale_t)__locale;
    p_Stack_1c0 = (__locale_data *)__locale;
    pcVar3 = getenv("LOCPATH");
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      iVar1 = argz_create_sep(pcVar3,0x3a,&local_1a8,&local_1a0);
      pp_Var10 = &local_278;
      if ((iVar1 != 0) ||
         (iVar1 = argz_add_sep(&local_1a8,&local_1a0,"/usr/lib/locale",0x3a), pp_Var10 = &local_278,
         iVar1 != 0)) goto LAB_006d79ec;
    }
    local_198.__locales[0] = (__locale_data *)local_1c8;
    local_198.__locales[1] = p_Stack_1c0;
    local_198.__locales[2] = (__locale_data *)local_1c8;
    local_198.__locales[3] = p_Stack_1c0;
    local_198.__locales[4] = (__locale_data *)local_1c8;
    local_198.__locales[5] = p_Stack_1c0;
    local_198.__locales[7] = (__locale_data *)local_1c8;
    local_198.__locales[8] = p_Stack_1c0;
    local_198.__locales[9] = (__locale_data *)local_1c8;
    local_198.__locales[10] = p_Stack_1c0;
    local_198.__locales[0xb] = (__locale_data *)local_1c8;
    local_198.__locales[0xc] = p_Stack_1c0;
    pcVar3 = strchr(__locale,0x3b);
    if (pcVar3 == (char *)0x0) {
LAB_006d7a1c:
      uVar15 = 0;
      *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7a31;
      pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
      p_Var14 = &local_198;
      iVar1 = 1;
      lVar16 = 0;
      local_1d0 = __base;
      local_1b8 = p_Var14;
      do {
        if (((uint)local_1b0 >> ((uint)uVar15 & 0x1f) & 1) == 0) {
          if (uVar15 != 6) {
            p_Var12 = (__locale_data *)local_a8[uVar15];
            p_Var17 = local_1d0;
            if (p_Var12 != (__locale_data *)0x804cb9) goto LAB_006d7a7a;
            goto joined_r0x006d7a88;
          }
        }
        else {
          local_1c8 = (__locale_t)CONCAT44(local_1c8._4_4_,(uint)uVar15);
          *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7ac2;
          pcVar3 = (char *)_nl_find_locale(local_1a8,local_1a0,uVar15 & 0xffffffff,p_Var14);
          local_198.__names[uVar15 - 2] = pcVar3;
          if (pcVar3 == (char *)0x0) {
            iVar1 = (int)local_1c8 + -1;
            if ((int)local_1c8 != 0) goto LAB_006d7f5c;
            goto LAB_006d7f95;
          }
          p_Var12 = p_Var14->__locales[0];
          p_Var17 = local_1d0;
          if (p_Var12 != (__locale_data *)0x804cb9) {
LAB_006d7a7a:
            *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7a7f;
            sVar4 = strlen((char *)p_Var12);
            lVar16 = lVar16 + 1 + sVar4;
            p_Var17 = local_1d0;
          }
joined_r0x006d7a88:
          local_1d0 = p_Var17;
          if (iVar1 == 0xd) goto LAB_006d7aea;
        }
        uVar15 = uVar15 + 1;
        iVar1 = iVar1 + 1;
        p_Var14 = (__locale_t)(p_Var14->__locales + 1);
      } while( true );
    }
    sVar4 = strlen(__locale);
    pp_Var11 = &local_278;
    while (pp_Var9 != (__locale_t *)((long)&local_278 - (sVar4 + 0x18 & 0xfffffffffffff000))) {
      pp_Var8 = (__locale_t *)((long)pp_Var11 + -0x1000);
      *(undefined8 *)((long)pp_Var11 + -8) = *(undefined8 *)((long)pp_Var11 + -8);
      pp_Var9 = (__locale_t *)((long)pp_Var11 + -0x1000);
      pp_Var11 = (__locale_t *)((long)pp_Var11 + -0x1000);
    }
    uVar15 = (ulong)((uint)(sVar4 + 0x18) & 0xff0);
    lVar16 = -uVar15;
    pp_Var11 = (__locale_t *)((long)pp_Var8 + lVar16);
    if (uVar15 != 0) {
      *(undefined8 *)((long)pp_Var8 + -8) = *(undefined8 *)((long)pp_Var8 + -8);
    }
    uVar13 = 0;
    *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d770b;
    pcVar3 = (char *)memcpy((void *)((ulong)((long)pp_Var8 + lVar16 + 0xf) & 0xfffffffffffffff0),
                            __locale,sVar4 + 1);
    p_Var14 = (__locale_t)(ulong)_nl_category_name_sizes;
    local_218 = "LC_COLLATE" + _nl_category_name_idxs;
    local_1c8 = (__locale_t)(ulong)DAT_008197e9;
    local_220 = "LC_COLLATE" + DAT_00819801;
    local_1b8 = (__locale_t)(ulong)DAT_008197ea;
    local_228 = "LC_COLLATE" + DAT_00819802;
    local_1d0 = (__locale_t)(ulong)DAT_008197eb;
    local_230 = "LC_COLLATE" + DAT_00819803;
    local_1d8 = (__locale_t)(ulong)DAT_008197ec;
    local_238 = "LC_COLLATE" + DAT_00819804;
    local_1e0 = (__locale_t)(ulong)DAT_008197ed;
    local_240 = "LC_COLLATE" + DAT_00819805;
    local_1e8 = (__locale_t)(ulong)DAT_008197ef;
    local_248 = "LC_COLLATE" + DAT_00819807;
    local_1f0 = (__locale_t)(ulong)DAT_008197f0;
    local_250 = "LC_COLLATE" + DAT_00819808;
    local_1f8 = (__locale_t)(ulong)DAT_008197f1;
    local_258 = "LC_COLLATE" + DAT_00819809;
    local_200 = (__locale_t)(ulong)DAT_008197f2;
    local_260 = "LC_COLLATE" + DAT_0081980a;
    local_208 = (__locale_t)(ulong)DAT_008197f3;
    local_268 = "LC_COLLATE" + DAT_0081980b;
    local_210 = (__locale_t)(ulong)DAT_008197f4;
    local_270 = "LC_COLLATE" + DAT_0081980c;
    local_278 = __base;
    while( true ) {
      *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d78a5;
      pcVar5 = strchr(pcVar3,0x3d);
      if (pcVar5 == (char *)0x0) break;
      p_Var17 = (__locale_t)(pcVar5 + -(long)pcVar3);
      if (p_Var17 == p_Var14) {
        *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7bf2;
        iVar1 = bcmp(pcVar3,local_218,(size_t)p_Var14);
        if (iVar1 != 0) goto LAB_006d78c0;
        uVar6 = 1;
        iVar1 = 0;
      }
      else {
LAB_006d78c0:
        if (p_Var17 == local_1c8) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7c1e;
          iVar1 = bcmp(pcVar3,local_220,(size_t)local_1c8);
          if (iVar1 == 0) {
            uVar6 = 2;
            iVar1 = 1;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1b8) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7c4e;
          iVar1 = bcmp(pcVar3,local_228,(size_t)local_1b8);
          if (iVar1 == 0) {
            uVar6 = 4;
            iVar1 = 2;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1d0) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7c7e;
          iVar1 = bcmp(pcVar3,local_230,(size_t)local_1d0);
          if (iVar1 == 0) {
            uVar6 = 8;
            iVar1 = 3;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1d8) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7cd6;
          iVar1 = bcmp(pcVar3,local_238,(size_t)local_1d8);
          if (iVar1 == 0) {
            uVar6 = 0x10;
            iVar1 = 4;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1e0) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7d06;
          iVar1 = bcmp(pcVar3,local_240,(size_t)local_1e0);
          if (iVar1 == 0) {
            uVar6 = 0x20;
            iVar1 = 5;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1e8) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7d36;
          iVar1 = bcmp(pcVar3,local_248,(size_t)local_1e8);
          if (iVar1 == 0) {
            uVar6 = 0x80;
            iVar1 = 7;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1f0) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7d66;
          iVar1 = bcmp(pcVar3,local_250,(size_t)local_1f0);
          if (iVar1 == 0) {
            uVar6 = 0x100;
            iVar1 = 8;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_1f8) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7d96;
          iVar1 = bcmp(pcVar3,local_258,(size_t)local_1f8);
          if (iVar1 == 0) {
            uVar6 = 0x200;
            iVar1 = 9;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_200) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7dc6;
          iVar1 = bcmp(pcVar3,local_260,(size_t)local_200);
          if (iVar1 == 0) {
            uVar6 = 0x400;
            iVar1 = 10;
            goto LAB_006d7c90;
          }
        }
        if (p_Var17 == local_208) {
          *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7df6;
          iVar1 = bcmp(pcVar3,local_268,(size_t)local_208);
          if (iVar1 == 0) {
            uVar6 = 0x800;
            iVar1 = 0xb;
            goto LAB_006d7c90;
          }
        }
        pp_Var10 = (__locale_t *)((long)pp_Var8 + lVar16);
        if (p_Var17 != local_210) goto LAB_006d7969;
        *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7961;
        iVar1 = bcmp(pcVar3,local_270,(size_t)local_210);
        pp_Var10 = (__locale_t *)((long)pp_Var8 + lVar16);
        if (iVar1 != 0) goto LAB_006d7969;
        uVar6 = 0x1000;
        iVar1 = 0xc;
      }
LAB_006d7c90:
      uVar13 = uVar13 | uVar6;
      local_198.__locales[iVar1] = (__locale_data *)(pcVar5 + 1);
      *(undefined8 *)((long)pp_Var8 + lVar16 + -8) = 0x6d7cab;
      pcVar3 = strchr(pcVar5 + 1,0x3b);
      if (pcVar3 == (char *)0x0) break;
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    pp_Var10 = (__locale_t *)((long)pp_Var8 + lVar16);
    __base = local_278;
    if (((uint)local_1b0 & ~uVar13) == 0) goto LAB_006d7a1c;
    goto LAB_006d7969;
  }
  if ((__base == (__locale_t)0x0) || ((uint)local_1b0 == 0x1fbf)) goto LAB_006d7533;
  local_198.__ctype_tolower = (int *)__base->__locales[0];
  local_198.__ctype_toupper = (int *)__base->__locales[1];
  local_198.__names[0] = (char *)__base->__locales[2];
  local_198.__names[1] = (char *)__base->__locales[3];
  local_198.__names[2] = (char *)__base->__locales[4];
  local_198.__names[3] = (char *)__base->__locales[5];
  local_198.__names[4] = (char *)__base->__locales[6];
  local_198.__names[5] = (char *)__base->__locales[7];
  local_198.__names[6] = (char *)__base->__locales[8];
  local_198.__names[7] = (char *)__base->__locales[9];
  local_198.__names[8] = (char *)__base->__locales[10];
  local_198.__names[9] = (char *)__base->__locales[0xb];
  local_a8[0xc] = __base->__names[0xc];
  local_198.__names[10] = (char *)__base->__locales[0xc];
  local_198.__names[0xb] = (char *)__base->__ctype_b;
  local_a8[8] = __base->__names[8];
  local_a8[9] = __base->__names[9];
  local_198.__names[0xc] = (char *)__base->__ctype_tolower;
  piStack_b0 = __base->__ctype_toupper;
  local_a8[0] = __base->__names[0];
  local_a8[1] = __base->__names[1];
  local_a8[2] = __base->__names[2];
  local_a8[3] = __base->__names[3];
  local_a8[4] = __base->__names[4];
  local_a8[5] = __base->__names[5];
  local_a8[6] = __base->__names[6];
  local_a8[7] = __base->__names[7];
  local_a8[10] = __base->__names[10];
  local_a8[0xb] = __base->__names[0xb];
  if ((uint)local_1b0 != 0) goto LAB_006d7629;
  puVar2 = (undefined1 *)malloc(0xe8);
  pp_Var10 = &local_278;
  if ((__locale_t)puVar2 == (__locale_t)0x0) goto LAB_006d79ec;
  ((__locale_t)puVar2)->__locales[0] = (__locale_data *)local_198.__ctype_tolower;
  ((__locale_t)puVar2)->__locales[1] = (__locale_data *)local_198.__ctype_toupper;
  ((__locale_t)puVar2)->__locales[2] = (__locale_data *)local_198.__names[0];
  ((__locale_t)puVar2)->__locales[3] = (__locale_data *)local_198.__names[1];
  ((__locale_t)puVar2)->__locales[4] = (__locale_data *)local_198.__names[2];
  ((__locale_t)puVar2)->__locales[5] = (__locale_data *)local_198.__names[3];
  ((__locale_t)puVar2)->__locales[6] = (__locale_data *)local_198.__names[4];
  ((__locale_t)puVar2)->__locales[7] = (__locale_data *)local_198.__names[5];
  ((__locale_t)puVar2)->__locales[8] = (__locale_data *)local_198.__names[6];
  ((__locale_t)puVar2)->__locales[9] = (__locale_data *)local_198.__names[7];
  ((__locale_t)puVar2)->__locales[10] = (__locale_data *)local_198.__names[8];
  ((__locale_t)puVar2)->__locales[0xb] = (__locale_data *)local_198.__names[9];
  ((__locale_t)puVar2)->__locales[0xc] = (__locale_data *)local_198.__names[10];
  ((__locale_t)puVar2)->__ctype_b = (ushort *)local_198.__names[0xb];
  ((__locale_t)puVar2)->__ctype_tolower = (int *)local_198.__names[0xc];
  ((__locale_t)puVar2)->__ctype_toupper = piStack_b0;
  ((__locale_t)puVar2)->__names[0] = local_a8[0];
  ((__locale_t)puVar2)->__names[1] = local_a8[1];
  ((__locale_t)puVar2)->__names[2] = local_a8[2];
  ((__locale_t)puVar2)->__names[3] = local_a8[3];
  ((__locale_t)puVar2)->__names[4] = local_a8[4];
  ((__locale_t)puVar2)->__names[5] = local_a8[5];
  ((__locale_t)puVar2)->__names[6] = local_a8[6];
  ((__locale_t)puVar2)->__names[7] = local_a8[7];
  ((__locale_t)puVar2)->__names[8] = local_a8[8];
  ((__locale_t)puVar2)->__names[9] = local_a8[9];
  ((__locale_t)puVar2)->__names[10] = local_a8[10];
  ((__locale_t)puVar2)->__names[0xb] = local_a8[0xb];
  ((__locale_t)puVar2)->__names[0xc] = local_a8[0xc];
  pp_Var11 = &local_278;
  goto LAB_006d74d5;
LAB_006d7aea:
  *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7b00;
  puVar2 = (undefined1 *)malloc(lVar16 + 0xe8);
  p_Var14 = local_1b8;
  if ((__locale_t)puVar2 == (__locale_t)0x0) {
    iVar1 = 0xc;
LAB_006d7f5c:
    uVar13 = (uint)local_1b0;
    uVar15 = (ulong)iVar1;
    do {
      if (((uVar13 >> ((uint)uVar15 & 0x1f) & 1) != 0) &&
         (*(int *)(local_198.__names[uVar15 - 2] + 0x30) != -1)) {
        *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7f88;
        _nl_remove_locale(uVar15 & 0xffffffff);
      }
      uVar15 = uVar15 - 1;
    } while (0 < (int)uVar15 + 1);
LAB_006d7f95:
    *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7fa1;
    pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
    pp_Var10 = pp_Var11;
LAB_006d79ec:
    puVar2 = (undefined1 *)0x0;
    goto LAB_006d7502;
  }
  __dest = (__locale_t)((long)puVar2 + 0xe8);
  uVar13 = (uint)local_1b0;
  if (p_Var17 != (__locale_t)0x0) {
    ppcVar7 = ((__locale_t)puVar2)->__names;
    uVar15 = 0;
    local_1c8 = (__locale_t)puVar2;
    local_1b0 = p_Var17;
    do {
      if ((uVar13 >> ((uint)uVar15 & 0x1f) & 1) == 0) {
        if (uVar15 != 6) {
          p_Var12 = (__locale_data *)local_a8[uVar15];
          ((__locale_struct *)(ppcVar7 + -0x10))->__locales[0] =
               (__locale_data *)local_198.__names[uVar15 - 2];
          if (p_Var12 != (__locale_data *)0x804cb9) goto LAB_006d7b85;
LAB_006d7bd1:
          *ppcVar7 = "C";
          goto LAB_006d7b94;
        }
      }
      else {
        if (*(int *)(local_1b0->__locales[uVar15] + 0x30) != -1) {
          *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7b66;
          _nl_remove_locale(uVar15 & 0xffffffff);
        }
        ((__locale_struct *)(ppcVar7 + -0x10))->__locales[0] =
             (__locale_data *)local_198.__names[uVar15 - 2];
        p_Var12 = local_1b8->__locales[uVar15];
        if (p_Var12 == (__locale_data *)0x804cb9) goto LAB_006d7bd1;
LAB_006d7b85:
        *ppcVar7 = (char *)__dest;
        *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7b90;
        pcVar3 = stpcpy((char *)__dest,(char *)p_Var12);
        __dest = (__locale_t)(pcVar3 + 1);
LAB_006d7b94:
        puVar2 = (undefined1 *)local_1c8;
        if (uVar15 == 0xc) goto LAB_006d7e0d;
      }
      uVar15 = uVar15 + 1;
      ppcVar7 = ppcVar7 + 1;
    } while( true );
  }
  lVar16 = 0;
  do {
    if (((uVar13 >> ((uint)lVar16 & 0x1f) & 1) != 0) &&
       (p_Var12 = p_Var14->__locales[lVar16], p_Var12 != (__locale_data *)0x804cb9)) {
      local_a8[lVar16] = (char *)__dest;
      *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7e7b;
      pcVar3 = stpcpy((char *)__dest,(char *)p_Var12);
      __dest = (__locale_t)(pcVar3 + 1);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0xd);
  ((__locale_t)puVar2)->__locales[0] = (__locale_data *)local_198.__ctype_tolower;
  ((__locale_t)puVar2)->__locales[1] = (__locale_data *)local_198.__ctype_toupper;
  ((__locale_t)puVar2)->__locales[2] = (__locale_data *)local_198.__names[0];
  ((__locale_t)puVar2)->__locales[3] = (__locale_data *)local_198.__names[1];
  ((__locale_t)puVar2)->__locales[4] = (__locale_data *)local_198.__names[2];
  ((__locale_t)puVar2)->__locales[5] = (__locale_data *)local_198.__names[3];
  ((__locale_t)puVar2)->__locales[6] = (__locale_data *)local_198.__names[4];
  ((__locale_t)puVar2)->__locales[7] = (__locale_data *)local_198.__names[5];
  ((__locale_t)puVar2)->__locales[8] = (__locale_data *)local_198.__names[6];
  ((__locale_t)puVar2)->__locales[9] = (__locale_data *)local_198.__names[7];
  ((__locale_t)puVar2)->__locales[10] = (__locale_data *)local_198.__names[8];
  ((__locale_t)puVar2)->__locales[0xb] = (__locale_data *)local_198.__names[9];
  ((__locale_t)puVar2)->__locales[0xc] = (__locale_data *)local_198.__names[10];
  ((__locale_t)puVar2)->__ctype_b = (ushort *)local_198.__names[0xb];
  ((__locale_t)puVar2)->__ctype_tolower = (int *)local_198.__names[0xc];
  ((__locale_t)puVar2)->__ctype_toupper = piStack_b0;
  ((__locale_t)puVar2)->__names[0xc] = local_a8[0xc];
  ((__locale_t)puVar2)->__names[0] = local_a8[0];
  ((__locale_t)puVar2)->__names[1] = local_a8[1];
  ((__locale_t)puVar2)->__names[2] = local_a8[2];
  ((__locale_t)puVar2)->__names[3] = local_a8[3];
  ((__locale_t)puVar2)->__names[4] = local_a8[4];
  ((__locale_t)puVar2)->__names[5] = local_a8[5];
  ((__locale_t)puVar2)->__names[6] = local_a8[6];
  ((__locale_t)puVar2)->__names[7] = local_a8[7];
  ((__locale_t)puVar2)->__names[8] = local_a8[8];
  ((__locale_t)puVar2)->__names[9] = local_a8[9];
  ((__locale_t)puVar2)->__names[10] = local_a8[10];
  ((__locale_t)puVar2)->__names[0xb] = local_a8[0xb];
  goto LAB_006d7e20;
LAB_006d7e0d:
  *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7e20;
  free(local_1b0);
LAB_006d7e20:
  *(undefined8 *)((long)pp_Var11 + -8) = 0x6d7e2c;
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
LAB_006d74d5:
  p_Var12 = ((__locale_t)puVar2)->__locales[0];
  piVar18 = (int *)(*(long *)(p_Var12 + 0x58) + _UNK_0081a128);
  ((__locale_t)puVar2)->__ctype_b = (ushort *)(*(long *)(p_Var12 + 0x40) + _DAT_0081a120);
  ((__locale_t)puVar2)->__ctype_tolower = piVar18;
  ((__locale_t)puVar2)->__ctype_toupper = (int *)(*(long *)(p_Var12 + 0x48) + 0x200);
  pp_Var10 = pp_Var11;
LAB_006d7502:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (__locale_t)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)pp_Var10 + -8) = &UNK_006d8081;
  __stack_chk_fail_local();
}

