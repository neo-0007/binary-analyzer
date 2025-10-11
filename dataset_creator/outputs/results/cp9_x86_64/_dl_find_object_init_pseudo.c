
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_find_object_init(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong *puVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  
  if ((_dl_ns[0x31e] & 4) == 0) {
    _dlfo_main._0_4_ = 0xffffffff;
    _dlfo_main._4_4_ = 0xffffffff;
    _DAT_0092ce68 = 0xffffffff;
    _UNK_0092ce6c = 0xffffffff;
  }
  else {
    _dl_find_object_from_map(_dl_ns,&_dlfo_main);
  }
  uVar9 = _dlfo_process_initial();
  puVar10 = (ulong *)malloc(_dlfo_nodelete_mappings_size << 5);
  _dlfo_nodelete_mappings = puVar10;
  if (uVar9 == 0) {
    if (puVar10 == (ulong *)0x0) goto LAB_0077b563;
    _dlfo_nodelete_mappings_size = 0;
    _dlfo_process_initial();
    if (_dlfo_nodelete_mappings_size == 0) {
      return;
    }
    if (_dlfo_nodelete_mappings_size == 1) {
      _dlfo_nodelete_mappings_end = puVar10[1];
      return;
    }
  }
  else {
    uVar13 = 0x3f;
    if (0x3e < uVar9) {
      uVar13 = uVar9;
    }
    _dlfo_loaded_mappings = (undefined1 (*) [16])malloc((uVar13 + 1) * 0x20);
    if (_dlfo_loaded_mappings == (undefined1 (*) [16])0x0) {
      _dlfo_loaded_mappings = (undefined1 (*) [16])0x0;
LAB_0077b563:
                    /* WARNING: Subroutine does not return */
      _dl_fatal_printf("Fatal glibc error: cannot allocate memory for find-object data\n");
    }
    *(undefined8 *)_dlfo_loaded_mappings[1] = 0;
    *(ulong *)(_dlfo_loaded_mappings[1] + 8) = uVar13;
    *_dlfo_loaded_mappings = (undefined1  [16])0x0;
    if (puVar10 == (ulong *)0x0) goto LAB_0077b563;
    _dlfo_nodelete_mappings_size = 0;
    _dlfo_process_initial();
    if (_dlfo_nodelete_mappings_size == 0) goto LAB_0077b6d0;
    if (_dlfo_nodelete_mappings_size == 1) {
      _dlfo_nodelete_mappings_end = puVar10[1];
      goto LAB_0077b6d0;
    }
  }
  uVar15 = _dlfo_nodelete_mappings_size;
  uVar13 = _dlfo_nodelete_mappings_size - 1;
  puVar17 = puVar10;
  uVar21 = 0;
  do {
    uVar18 = uVar21 + 1;
    uVar12 = *puVar17;
    uVar11 = uVar18;
    puVar14 = puVar17;
    if (uVar18 < uVar15) {
      do {
        if (puVar10[uVar11 * 4] < uVar12) {
          uVar12 = puVar10[uVar11 * 4];
          uVar21 = uVar11;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar15);
      uVar12 = puVar10[uVar21 * 4];
      puVar14 = puVar10 + uVar21 * 4;
    }
    uVar11 = puVar17[1];
    uVar3 = puVar14[2];
    uVar4 = puVar14[3];
    uVar21 = puVar14[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar11;
    uVar11 = puVar17[3];
    puVar14[2] = puVar17[2];
    puVar14[3] = uVar11;
    *puVar17 = uVar12;
    puVar17[1] = uVar21;
    puVar17[2] = uVar3;
    puVar17[3] = uVar4;
    puVar17 = puVar17 + 4;
    uVar21 = uVar18;
  } while (uVar18 < uVar13);
  _dlfo_nodelete_mappings_end = puVar10[uVar13 * 4 + 1];
  if (uVar9 == 0) {
    return;
  }
LAB_0077b6d0:
  pauVar8 = _dlfo_loaded_mappings;
  uVar9 = *(ulong *)_dlfo_loaded_mappings[1];
  if (uVar9 < 2) {
    return;
  }
  uVar15 = 0;
  pauVar1 = _dlfo_loaded_mappings + 2;
  uVar21 = 1;
  uVar13 = *(ulong *)*pauVar1;
  pauVar16 = pauVar1;
  pauVar19 = pauVar1;
  uVar12 = uVar21;
  if (uVar9 < 2) goto LAB_0077b73a;
  do {
    do {
      if (*(ulong *)pauVar8[uVar21 * 2 + 2] < uVar13) {
        uVar13 = *(ulong *)pauVar8[uVar21 * 2 + 2];
        uVar15 = uVar21;
      }
      uVar21 = uVar21 + 1;
    } while (uVar9 != uVar21);
    uVar13 = *(ulong *)pauVar1[uVar15 * 2];
    pauVar16 = pauVar1 + uVar15 * 2;
    uVar21 = uVar12;
LAB_0077b73a:
    do {
      uVar15 = uVar21;
      uVar5 = *(undefined8 *)(*pauVar19 + 8);
      uVar6 = *(undefined8 *)pauVar16[1];
      uVar7 = *(undefined8 *)(pauVar16[1] + 8);
      pauVar20 = pauVar19 + 2;
      uVar2 = *(undefined8 *)(*pauVar16 + 8);
      *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar19;
      *(undefined8 *)(*pauVar16 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pauVar19[1] + 8);
      *(undefined8 *)pauVar16[1] = *(undefined8 *)pauVar19[1];
      *(undefined8 *)(pauVar16[1] + 8) = uVar5;
      *(ulong *)*pauVar19 = uVar13;
      *(undefined8 *)(*pauVar19 + 8) = uVar2;
      *(undefined8 *)pauVar19[1] = uVar6;
      *(undefined8 *)(pauVar19[1] + 8) = uVar7;
      if (uVar15 == uVar9 - 1) {
        return;
      }
      uVar21 = uVar15 + 1;
      uVar13 = *(ulong *)*pauVar20;
      pauVar16 = pauVar20;
      pauVar19 = pauVar20;
      uVar12 = uVar21;
    } while (uVar9 <= uVar21);
  } while( true );
}

