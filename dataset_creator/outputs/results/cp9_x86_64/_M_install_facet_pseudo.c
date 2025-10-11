
/* std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*) */

void __thiscall std::locale::_Impl::_M_install_facet(_Impl *this,id *param_1,facet *param_2)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  id *this_00;
  undefined **ppuVar15;
  facet *pfVar16;
  facet *pfVar17;
  long local_50;
  
  if (param_2 == (facet *)0x0) {
    return;
  }
  uVar5 = locale::id::_M_id(param_1);
  if (*(long *)(this + 0x10) - 1U < uVar5) {
    pvVar2 = *(void **)(this + 8);
    uVar11 = uVar5 + 4;
    uVar6 = 0xffffffffffffffff;
    if (uVar11 < 0x1000000000000000) {
      uVar6 = uVar11 * 8;
    }
    pvVar7 = operator_new__(uVar6);
    uVar10 = *(ulong *)(this + 0x10);
    if (uVar10 != 0) {
      lVar13 = *(long *)(this + 8);
      uVar8 = 0;
      do {
        *(undefined8 *)((long)pvVar7 + uVar8 * 8) = *(undefined8 *)(lVar13 + uVar8 * 8);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
    }
    if (uVar10 < uVar11) {
      memset((void *)((long)pvVar7 + uVar10 * 8),0,(uVar11 - uVar10) * 8);
    }
    pvVar3 = *(void **)(this + 0x18);
                    /* try { // try from 00624829 to 0062482d has its CatchHandler @ 00624c12 */
    pvVar9 = operator_new__(uVar6);
    uVar6 = *(ulong *)(this + 0x10);
    if (uVar6 != 0) {
      lVar13 = *(long *)(this + 0x18);
      uVar10 = 0;
      do {
        *(undefined8 *)((long)pvVar9 + uVar10 * 8) = *(undefined8 *)(lVar13 + uVar10 * 8);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
    }
    if (uVar6 < uVar11) {
      memset((void *)((long)pvVar9 + uVar6 * 8),0,(uVar11 - uVar6) * 8);
    }
    *(ulong *)(this + 0x10) = uVar11;
    *(void **)(this + 8) = pvVar7;
    *(void **)(this + 0x18) = pvVar9;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar1 = (long *)(*(long *)(this + 8) + uVar5 * 8);
  pfVar16 = (facet *)*plVar1;
  if (pfVar16 == (facet *)0x0) goto LAB_0062499d;
  if (_S_twinned_facets == (undefined *)0x0) {
LAB_0062497e:
    if (__libc_single_threaded != '\0') goto LAB_00624989;
LAB_00624a66:
    LOCK();
    pfVar17 = pfVar16 + 8;
    iVar4 = *(int *)pfVar17;
    *(int *)pfVar17 = *(int *)pfVar17 + -1;
    UNLOCK();
  }
  else {
    ppuVar15 = &_S_twinned_facets;
    this_00 = (id *)_S_twinned_facets;
    do {
      uVar11 = locale::id::_M_id(this_00);
      if (uVar11 == uVar5) {
        lVar13 = *(long *)(this + 8);
        lVar12 = locale::id::_M_id((id *)ppuVar15[1]);
        plVar14 = (long *)(lVar13 + lVar12 * 8);
        if (*plVar14 != 0) {
          local_50 = facet::_M_sso_shim(param_2,(id *)ppuVar15[1]);
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
            pfVar17 = (facet *)*plVar14;
            pfVar16 = pfVar17 + 8;
            if (__libc_single_threaded != '\0') goto LAB_0062495e;
            LOCK();
            iVar4 = *(int *)pfVar16;
            *(int *)pfVar16 = *(int *)pfVar16 + -1;
            UNLOCK();
          }
          else {
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            pfVar17 = (facet *)*plVar14;
LAB_0062495e:
            iVar4 = *(int *)(pfVar17 + 8);
            *(int *)(pfVar17 + 8) = iVar4 + -1;
          }
          if (iVar4 == 1) {
            if (*(code **)(*(long *)pfVar17 + 8) == facet::~facet) {
                    /* try { // try from 00624bbe to 00624bc2 has its CatchHandler @ 00624c04 */
              facet::~facet(pfVar17);
              operator_delete(pfVar17);
            }
            else {
                    /* try { // try from 00624bd7 to 00624bd8 has its CatchHandler @ 00624c44 */
              (**(code **)(*(long *)pfVar17 + 8))();
            }
          }
LAB_00624972:
          *plVar14 = local_50;
          pfVar16 = (facet *)*plVar1;
          goto LAB_0062497e;
        }
        break;
      }
      uVar11 = locale::id::_M_id((id *)ppuVar15[1]);
      if (uVar11 == uVar5) {
        lVar13 = *(long *)(this + 8);
        lVar12 = locale::id::_M_id((id *)*ppuVar15);
        plVar14 = (long *)(lVar13 + lVar12 * 8);
        if (*plVar14 != 0) {
          local_50 = facet::_M_cow_shim(param_2,(id *)*ppuVar15);
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
            pfVar17 = (facet *)*plVar14;
            pfVar16 = pfVar17 + 8;
            if (__libc_single_threaded != '\0') goto LAB_00624b0b;
            LOCK();
            iVar4 = *(int *)pfVar16;
            *(int *)pfVar16 = *(int *)pfVar16 + -1;
            UNLOCK();
          }
          else {
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            pfVar17 = (facet *)*plVar14;
LAB_00624b0b:
            iVar4 = *(int *)(pfVar17 + 8);
            *(int *)(pfVar17 + 8) = iVar4 + -1;
          }
          if (iVar4 == 1) {
            if (*(code **)(*(long *)pfVar17 + 8) == facet::~facet) {
                    /* try { // try from 00624b39 to 00624b3d has its CatchHandler @ 00624c2a */
              facet::~facet(pfVar17);
              operator_delete(pfVar17);
            }
            else {
                    /* try { // try from 00624bd0 to 00624bd1 has its CatchHandler @ 00624c38 */
              (**(code **)(*(long *)pfVar17 + 8))();
            }
          }
          goto LAB_00624972;
        }
        break;
      }
      this_00 = (id *)ppuVar15[2];
      ppuVar15 = ppuVar15 + 2;
    } while (this_00 != (id *)0x0);
    pfVar16 = (facet *)*plVar1;
    if (__libc_single_threaded == '\0') goto LAB_00624a66;
LAB_00624989:
    iVar4 = *(int *)(pfVar16 + 8);
    *(int *)(pfVar16 + 8) = iVar4 + -1;
  }
  if (iVar4 == 1) {
    if (*(code **)(*(long *)pfVar16 + 8) == facet::~facet) {
      facet::~facet(pfVar16);
      operator_delete(pfVar16);
    }
    else {
                    /* try { // try from 00624ba1 to 00624ba2 has its CatchHandler @ 00624c1e */
      (**(code **)(*(long *)pfVar16 + 8))();
    }
  }
LAB_0062499d:
  lVar13 = *(long *)(this + 0x10);
  *plVar1 = (long)param_2;
  if (lVar13 != 0) {
    lVar13 = *(long *)(this + 0x18);
    uVar5 = 0;
    do {
      pfVar16 = *(facet **)(lVar13 + uVar5 * 8);
      if (pfVar16 != (facet *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          pfVar17 = pfVar16 + 8;
          iVar4 = *(int *)pfVar17;
          *(int *)pfVar17 = *(int *)pfVar17 + -1;
          UNLOCK();
        }
        else {
          iVar4 = *(int *)(pfVar16 + 8);
          *(int *)(pfVar16 + 8) = iVar4 + -1;
        }
        if (iVar4 == 1) {
          if (*(code **)(*(long *)pfVar16 + 8) == facet::~facet) {
            facet::~facet(pfVar16);
            operator_delete(pfVar16);
          }
          else {
            (**(code **)(*(long *)pfVar16 + 8))();
          }
        }
        lVar13 = *(long *)(this + 0x18);
        *(undefined8 *)(lVar13 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(this + 0x10));
  }
  return;
}

