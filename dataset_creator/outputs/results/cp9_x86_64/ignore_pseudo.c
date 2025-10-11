
/* std::wistream::ignore(long) */

wistream * __thiscall std::wistream::ignore(wistream *this,long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  wistream *pwVar5;
  long lVar6;
  long lVar7;
  sentry sVar8;
  long in_FS_OFFSET;
  sentry local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pwVar5 = (wistream *)ignore(this);
      return pwVar5;
    }
    goto LAB_006b6aeb;
  }
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(&local_41,this,true);
  if ((0 < param_1) && (local_41 != (sentry)0x0)) {
    plVar1 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8);
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar4 = *(int *)plVar1[2];
    }
    else {
      iVar4 = (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    sVar8 = (sentry)0x0;
LAB_006b6980:
    do {
      lVar7 = *(long *)(this + 8);
      while (lVar7 < param_1) {
        if (iVar4 == -1) {
LAB_006b6a20:
          if (param_1 == 0x7fffffffffffffff) goto LAB_006b6aa0;
          goto LAB_006b6a2f;
        }
        piVar2 = (int *)plVar1[3];
        piVar3 = (int *)plVar1[2];
        lVar6 = (long)piVar2 - (long)piVar3 >> 2;
        if (param_1 - lVar7 < lVar6) {
          lVar6 = param_1 - lVar7;
        }
        if (lVar6 < 2) {
          *(long *)(this + 8) = lVar7 + 1;
          if (piVar3 < piVar2) {
            iVar4 = *piVar3;
            plVar1[2] = (long)(piVar3 + 1);
          }
          else {
            iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
          }
          if (iVar4 == -1) {
            lVar7 = *(long *)(this + 8);
            goto LAB_006b6a20;
          }
          if ((int *)plVar1[2] < (int *)plVar1[3]) {
            iVar4 = *(int *)plVar1[2];
          }
          else {
LAB_006b6ac0:
                    /* try { // try from 006b6ac7 to 006b6ae5 has its CatchHandler @ 006b6afc */
            iVar4 = (**(code **)(*plVar1 + 0x48))(plVar1);
          }
          goto LAB_006b6980;
        }
        piVar3 = piVar3 + lVar6;
        plVar1[2] = (long)piVar3;
        *(long *)(this + 8) = lVar6 + lVar7;
        if (piVar2 <= piVar3) goto LAB_006b6ac0;
        iVar4 = *piVar3;
        lVar7 = *(long *)(this + 8);
      }
      if (param_1 != 0x7fffffffffffffff) {
        local_41 = (sentry)(iVar4 == -1);
LAB_006b6a2f:
        if ((param_1 <= lVar7) || (local_41 == (sentry)0x0)) break;
        goto LAB_006b6a48;
      }
      if (iVar4 == -1) goto LAB_006b6aa0;
      *(undefined8 *)(this + 8) = 0x8000000000000000;
      sVar8 = local_41;
    } while( true );
  }
  goto LAB_006b68f8;
LAB_006b6aa0:
  if (sVar8 != (sentry)0x0) {
    *(undefined8 *)(this + 8) = 0x7fffffffffffffff;
  }
LAB_006b6a48:
  wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
              *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
LAB_006b68f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_006b6aeb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

