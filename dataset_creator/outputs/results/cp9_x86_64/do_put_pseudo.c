
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::do_put(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&, wchar_t,
   bool) const */

long * std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::do_put
                 (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,char param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [4];
  uint local_d4;
  wchar_t *local_d0;
  long local_c8;
  wchar_t *local_c0;
  long *local_b8;
  ulong local_b0;
  long *local_a8;
  ulong local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  __use_cache<std::__numpunct_cache<wchar_t>> local_59;
  long *local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar12 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_4 + 0x18) & 1) == 0) {
    auVar14 = _M_insert_int<long>();
    local_70 = auVar14._8_8_;
    param_2 = auVar14._0_8_;
    puVar11 = auStack_d8;
    local_78 = param_2;
  }
  else {
    local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,*(uint *)(param_4 + 0x18));
    lVar6 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                      (&local_59,(locale *)(param_4 + 0xd0));
    if (param_6 == '\0') {
      pwVar13 = *(wchar_t **)(lVar6 + 0x38);
      iVar1 = *(int *)(lVar6 + 0x40);
    }
    else {
      pwVar13 = *(wchar_t **)(lVar6 + 0x28);
      iVar1 = *(int *)(lVar6 + 0x30);
    }
    lVar6 = (long)iVar1;
    bVar10 = (byte)param_3;
    if (lVar6 < *(long *)(param_4 + 0x10)) {
      lVar7 = *(long *)(param_4 + 0x10) - lVar6;
      uVar9 = lVar7 * 4 + 0x17;
      for (; puVar12 != auStack_d8 + -(uVar9 & 0xfffffffffffff000); puVar12 = puVar12 + -0x1000) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      uVar9 = (ulong)((uint)uVar9 & 0xff0);
      lVar3 = -uVar9;
      puVar11 = puVar12 + lVar3;
      if (uVar9 != 0) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      local_d4 = (uint)local_c0;
      local_d0 = pwVar13;
      local_c8 = lVar7;
      local_c0 = (wchar_t *)((ulong)(puVar12 + lVar3 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)(puVar12 + lVar3 + -8) = 0x6a80cc;
      __wmemset_chk((wchar_t *)((ulong)(puVar12 + lVar3 + 0xf) & 0xfffffffffffffff0),param_5,lVar7,
                    0x3fffffffffffffff);
      pwVar4 = local_c0;
      pwVar13 = local_d0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      lVar7 = (long)(int)local_c8;
      if ((local_d4 & 0xb0) == 0x20) {
        local_58 = param_2;
        uStack_50 = param_3;
        *(undefined8 *)(puVar12 + lVar3 + -8) = 0x6a8193;
        ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_put
                  ((ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58,pwVar13,lVar6
                  );
        pwVar13 = local_c0;
        local_88 = local_58;
        uStack_80 = uStack_50;
        uVar5 = uStack_80;
        uStack_80._0_1_ = (undefined1)uStack_50;
        uStack_50 = CONCAT71((int7)((ulong)param_3 >> 8),(undefined1)uStack_80);
        uStack_80 = uVar5;
        *(undefined8 *)(puVar12 + lVar3 + -8) = 0x6a81c3;
        ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_put
                  ((ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_58,pwVar13,lVar7
                  );
        local_98 = local_58;
        uStack_90 = uStack_50;
        param_2 = local_58;
      }
      else {
        local_c0 = local_d0;
        if (bVar10 == 0) {
          pcVar2 = *(code **)(*param_2 + 0x60);
          *(undefined8 *)(puVar12 + lVar3 + -8) = 0x6a811e;
          lVar8 = (*pcVar2)(param_2,pwVar4,lVar7);
          pwVar13 = local_c0;
          if (lVar7 == lVar8) {
            pcVar2 = *(code **)(*param_2 + 0x60);
            *(undefined8 *)(puVar12 + lVar3 + -8) = 0x6a813e;
            lVar7 = (*pcVar2)(param_2,pwVar13,lVar6);
            if (lVar7 != lVar6) {
              bVar10 = 1;
            }
          }
          else {
            bVar10 = 1;
          }
        }
        local_a0 = (ulong)bVar10;
        puVar11 = puVar12 + lVar3;
        local_a8 = param_2;
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x10) = 0;
      if (bVar10 == 0) {
        lVar7 = (**(code **)(*param_2 + 0x60))(param_2,pwVar13,lVar6);
        if (lVar7 != lVar6) {
          bVar10 = 1;
        }
      }
      local_b0 = (ulong)bVar10;
      puVar11 = auStack_d8;
      local_b8 = param_2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_006a8208;
  __stack_chk_fail_local();
}

