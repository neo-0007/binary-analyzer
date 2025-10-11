
undefined8
__gxx_personality_v0(int param_1,uint param_2,long param_3,byte *param_4,_Unwind_Context *param_5)

{
  byte bVar1;
  _Unwind_Context _Var2;
  bool bVar3;
  byte bVar4;
  uchar uVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  uchar *puVar13;
  undefined **ppuVar14;
  type_info *ptVar15;
  byte bVar16;
  uint uVar17;
  _Unwind_Context *p_Var18;
  _Unwind_Context *p_Var19;
  ulong uVar20;
  _Unwind_Context *p_Var21;
  _Unwind_Context *p_Var22;
  _Unwind_Context *p_Var23;
  long in_FS_OFFSET;
  uchar *local_d8;
  uint local_b8;
  byte *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  byte *local_58;
  uchar local_50;
  uchar local_4f;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (byte *)0x0;
  if (param_1 == 1) {
    uVar8 = param_3 + 0xb8b1aabcbcd4d500;
    bVar3 = uVar8 < 2;
    bVar6 = param_2 == 6 && bVar3;
    if (param_2 == 6 && bVar3) {
      local_d8 = *(uchar **)(param_4 + -0x18);
      p_Var22 = *(_Unwind_Context **)(param_4 + -0x10);
      p_Var23 = (_Unwind_Context *)(ulong)*(uint *)(param_4 + -0x24);
      if (p_Var22 != (_Unwind_Context *)0x0) {
LAB_006ac930:
        if ((int)p_Var23 < 0) {
          parse_lsda_header(param_5,local_d8,(lsda_header_info *)&local_78);
          local_68 = base_of_encoded_value(local_50,param_5);
          uVar9 = base_of_encoded_value(local_50,param_5);
          *(undefined8 *)(param_4 + -0x10) = uVar9;
        }
        goto LAB_006ac940;
      }
    }
    else {
      local_d8 = (uchar *)_Unwind_GetLanguageSpecificData(param_5);
      if (local_d8 == (uchar *)0x0) goto LAB_006ac982;
      pbVar10 = (byte *)parse_lsda_header(param_5,local_d8,(lsda_header_info *)&local_78);
      local_68 = base_of_encoded_value(local_50,param_5);
      lVar11 = _Unwind_GetIPInfo(param_5);
      if (pbVar10 < local_58) {
        do {
          uVar5 = local_4f;
          uVar12 = base_of_encoded_value(local_4f,(_Unwind_Context *)0x0);
          puVar13 = (uchar *)read_encoded_value_with_base(uVar5,uVar12,pbVar10,&local_90);
          uVar5 = local_4f;
          uVar12 = base_of_encoded_value(local_4f,(_Unwind_Context *)0x0);
          puVar13 = (uchar *)read_encoded_value_with_base(uVar5,uVar12,puVar13,&local_88);
          uVar5 = local_4f;
          uVar12 = base_of_encoded_value(local_4f,(_Unwind_Context *)0x0);
          pbVar10 = (byte *)read_encoded_value_with_base(uVar5,uVar12,puVar13,&local_80);
          uVar12 = 0;
          bVar16 = 0;
          do {
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            bVar4 = bVar16 & 0x3f;
            bVar16 = bVar16 + 7;
            uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << bVar4;
          } while ((char)bVar1 < '\0');
          if (lVar11 - 1U < local_90 + local_78) break;
          if (lVar11 - 1U < local_90 + local_78 + local_88) {
            if (local_80 == 0) goto LAB_006ac982;
            p_Var22 = (_Unwind_Context *)(local_80 + local_70);
            if (uVar12 == 0) {
              if (p_Var22 == (_Unwind_Context *)0x0) goto LAB_006ac982;
              goto LAB_006ac9cf;
            }
            p_Var21 = (_Unwind_Context *)(local_58 + (uVar12 - 1));
            if (p_Var22 == (_Unwind_Context *)0x0) goto LAB_006ac982;
            if (p_Var21 == (_Unwind_Context *)0x0) goto LAB_006ac9cf;
            local_b8 = param_2 & 8;
            if ((param_2 & 8) == 0) {
              if (uVar8 < 2) {
                local_98 = param_4 + 0x20;
                if ((*param_4 & 1) != 0) {
                  local_98 = *(byte **)(param_4 + -0x50);
                }
                ppuVar14 = *(undefined ***)(local_98 + -0x70);
              }
              else {
                ppuVar14 = &__cxxabiv1::__foreign_exception::typeinfo;
              }
            }
            else {
              ppuVar14 = &__cxxabiv1::__forced_unwind::typeinfo;
            }
            goto LAB_006aca90;
          }
        } while (pbVar10 < local_58);
      }
      if ((param_2 & 1) != 0) {
        p_Var22 = (_Unwind_Context *)0x0;
        p_Var21 = (_Unwind_Context *)0x0;
        p_Var23 = (_Unwind_Context *)0x0;
LAB_006ac8f3:
        uVar9 = 6;
        if (uVar8 < 2) {
LAB_006ac904:
          *(uchar **)(param_4 + -0x18) = local_d8;
          *(int *)(param_4 + -0x24) = (int)p_Var23;
          *(byte **)(param_4 + -8) = local_98;
          uVar9 = 6;
          *(_Unwind_Context **)(param_4 + -0x20) = p_Var21;
          *(_Unwind_Context **)(param_4 + -0x10) = p_Var22;
        }
        goto LAB_006ac785;
      }
      if (((param_2 & 8) != 0) || (1 < uVar8)) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    __cxa_call_terminate(param_4);
  }
  uVar9 = 3;
  goto LAB_006ac785;
LAB_006aca90:
  p_Var23 = (_Unwind_Context *)0x0;
  uVar17 = 0;
  p_Var19 = p_Var21;
  do {
    _Var2 = *p_Var19;
    p_Var19 = p_Var19 + 1;
    bVar16 = (byte)uVar17;
    uVar17 = uVar17 + 7;
    p_Var23 = (_Unwind_Context *)((ulong)p_Var23 | (ulong)((byte)_Var2 & 0x7f) << (bVar16 & 0x3f));
  } while ((char)_Var2 < '\0');
  if ((uVar17 < 0x40) && (((byte)_Var2 & 0x40) != 0)) {
    p_Var23 = (_Unwind_Context *)((ulong)p_Var23 | -(1L << ((byte)uVar17 & 0x3f)));
  }
  uVar12 = 0;
  uVar17 = 0;
  p_Var18 = p_Var19;
  do {
    _Var2 = *p_Var18;
    p_Var18 = p_Var18 + 1;
    bVar16 = (byte)uVar17;
    uVar17 = uVar17 + 7;
    uVar12 = uVar12 | (ulong)((byte)_Var2 & 0x7f) << (bVar16 & 0x3f);
  } while ((char)_Var2 < '\0');
  if ((uVar17 < 0x40) && (((byte)_Var2 & 0x40) != 0)) {
    uVar12 = uVar12 | -(1L << ((byte)uVar17 & 0x3f));
  }
  if (p_Var23 == (_Unwind_Context *)0x0) {
    bVar6 = true;
  }
  else if ((long)p_Var23 < 1) {
    if ((bVar3 && local_b8 == 0) && ((type_info *)ppuVar14 != (type_info *)0x0)) goto LAB_006acbf0;
    uVar20 = 0;
    bVar16 = 0;
    pbVar10 = (byte *)(~(ulong)p_Var23 + local_60);
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar4 = bVar16 & 0x3f;
      bVar16 = bVar16 + 7;
      uVar20 = uVar20 | (ulong)(bVar1 & 0x7f) << bVar4;
    } while ((char)bVar1 < '\0');
    if (uVar20 == 0) {
LAB_006acbb2:
      if ((param_2 & 1) != 0) goto LAB_006ac8f3;
      if (local_b8 != 0) goto LAB_006acbe1;
      while( true ) {
        if (uVar8 < 2) goto LAB_006ac930;
LAB_006acbe1:
        if (-1 < (int)p_Var23) goto LAB_006ac940;
                    /* try { // try from 006acbea to 006acbee has its CatchHandler @ 006acca4 */
        std::unexpected();
        p_Var19 = param_5;
        p_Var21 = p_Var23;
        p_Var23 = p_Var22;
LAB_006acbf0:
        cVar7 = check_exception_spec
                          ((lsda_header_info *)&local_78,(type_info *)ppuVar14,local_98,
                           (long)p_Var23);
        if (cVar7 != '\0') break;
        if ((param_2 & 1) != 0) goto LAB_006ac904;
      }
    }
  }
  else {
    ptVar15 = (type_info *)get_ttype_entry((lsda_header_info *)&local_78,(ulong)p_Var23);
    if ((ptVar15 == (type_info *)0x0) ||
       (((type_info *)ppuVar14 != (type_info *)0x0 &&
        (cVar7 = get_adjusted_ptr(ptVar15,(type_info *)ppuVar14,&local_98), cVar7 != '\0'))))
    goto LAB_006acbb2;
  }
  if (uVar12 == 0) goto LAB_006acc30;
  p_Var21 = p_Var19 + uVar12;
  goto LAB_006aca90;
LAB_006acc30:
  if (bVar6) {
LAB_006ac9cf:
    p_Var23 = (_Unwind_Context *)(ulong)(param_2 & 1);
    if ((param_2 & 1) == 0) {
LAB_006ac940:
      _Unwind_SetGR(param_5,0,param_4);
      _Unwind_SetGR(param_5,1,(long)(int)p_Var23);
      _Unwind_SetIP(param_5,p_Var22);
      uVar9 = 7;
      goto LAB_006ac785;
    }
  }
LAB_006ac982:
  uVar9 = 8;
LAB_006ac785:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar9;
}

