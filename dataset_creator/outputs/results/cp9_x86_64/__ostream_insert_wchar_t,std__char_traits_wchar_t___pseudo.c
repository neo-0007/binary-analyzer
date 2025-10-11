
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wostream& std::__ostream_insert<wchar_t, std::char_traits<wchar_t> >(std::wostream&, wchar_t
   const*, long) */

wostream *
std::__ostream_insert<wchar_t,std::char_traits<wchar_t>>
          (wostream *param_1,wchar_t *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  wios *pwVar10;
  long in_FS_OFFSET;
  sentry local_58 [8];
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  wostream::sentry::sentry(local_58,param_1);
  if (local_58[0] != (sentry)0x0) {
    pwVar10 = (wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
    lVar9 = *(long *)(pwVar10 + 0x10);
    if (param_3 < lVar9) {
      uVar1 = *(uint *)(pwVar10 + 0x18);
      if ((uVar1 & 0xb0) == 0x20) {
LAB_0068d759:
        iVar6 = *(int *)(pwVar10 + 0x20);
      }
      else {
        lVar7 = lVar9 - param_3;
        if (pwVar10[0xe4] == (wios)0x0) {
          plVar2 = *(long **)(pwVar10 + 0xf0);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            __throw_bad_cast();
          }
          iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
          *(int *)(pwVar10 + 0xe0) = iVar6;
          lVar8 = *(long *)param_1;
          pwVar10[0xe4] = (wios)0x1;
          pwVar10 = (wios *)(param_1 + *(long *)(lVar8 + -0x18));
        }
        else {
          iVar6 = *(int *)(pwVar10 + 0xe0);
        }
        do {
          plVar2 = *(long **)(pwVar10 + 0xe8);
          piVar3 = (int *)plVar2[5];
          if (piVar3 < (int *)plVar2[6]) {
            *piVar3 = iVar6;
            plVar2[5] = (long)(piVar3 + 1);
            iVar5 = iVar6;
          }
          else {
                    /* try { // try from 0068d727 to 0068d74d has its CatchHandler @ 0068d9ba */
            iVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,iVar6);
            pwVar10 = (wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
          }
          if (iVar5 == -1) {
            wios::clear(pwVar10,*(uint *)(pwVar10 + 0x20) | 1);
            pwVar10 = (wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
            goto LAB_0068d759;
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        iVar6 = *(int *)(pwVar10 + 0x20);
      }
      if (iVar6 == 0) {
        lVar8 = (**(code **)(**(long **)(pwVar10 + 0xe8) + 0x60))
                          (*(long **)(pwVar10 + 0xe8),param_2,param_3);
        lVar7 = *(long *)param_1;
        if (param_3 != lVar8) {
          wios::clear((wios *)(param_1 + *(long *)(lVar7 + -0x18)),
                      *(uint *)((wios *)(param_1 + *(long *)(lVar7 + -0x18)) + 0x20) | 1);
          lVar7 = *(long *)param_1;
        }
        pwVar10 = (wios *)(param_1 + *(long *)(lVar7 + -0x18));
        if (((uVar1 & 0xb0) == 0x20) && (*(int *)(pwVar10 + 0x20) == 0)) {
          lVar9 = lVar9 - param_3;
          if (pwVar10[0xe4] == (wios)0x0) {
            plVar2 = *(long **)(pwVar10 + 0xf0);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              __throw_bad_cast();
            }
                    /* try { // try from 0068d970 to 0068d9b9 has its CatchHandler @ 0068d9ba */
            iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
            *(int *)(pwVar10 + 0xe0) = iVar6;
            lVar7 = *(long *)param_1;
            pwVar10[0xe4] = (wios)0x1;
            pwVar10 = (wios *)(param_1 + *(long *)(lVar7 + -0x18));
          }
          else {
            iVar6 = *(int *)(pwVar10 + 0xe0);
          }
          do {
            plVar2 = *(long **)(pwVar10 + 0xe8);
            piVar3 = (int *)plVar2[5];
            if (piVar3 < (int *)plVar2[6]) {
              *piVar3 = iVar6;
              plVar2[5] = (long)(piVar3 + 1);
              iVar5 = iVar6;
            }
            else {
              iVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,iVar6);
              pwVar10 = (wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
            }
            if (iVar5 == -1) {
              wios::clear(pwVar10,*(uint *)(pwVar10 + 0x20) | 1);
              goto LAB_0068d818;
            }
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
    }
    else {
                    /* try { // try from 0068d7f2 to 0068d91a has its CatchHandler @ 0068d9ba */
      lVar9 = (**(code **)(**(long **)(pwVar10 + 0xe8) + 0x60))
                        (*(long **)(pwVar10 + 0xe8),param_2,param_3);
      pwVar10 = (wios *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
      if (param_3 != lVar9) {
        wios::clear(pwVar10,*(uint *)(pwVar10 + 0x20) | 1);
LAB_0068d818:
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 0;
        goto LAB_0068d76d;
      }
    }
    *(undefined8 *)(pwVar10 + 0x10) = 0;
  }
LAB_0068d76d:
  plVar2 = local_50;
  lVar9 = *(long *)(*local_50 + -0x18);
  if (((((*(byte *)((long)local_50 + lVar9 + 0x19) & 0x20) != 0) &&
       (cVar4 = uncaught_exception(), cVar4 == '\0')) &&
      (plVar2 = *(long **)((long)plVar2 + lVar9 + 0xe8), plVar2 != (long *)0x0)) &&
     (iVar6 = (**(code **)(*plVar2 + 0x30))(), iVar6 == -1)) {
    pwVar10 = (wios *)((long)local_50 + *(long *)(*local_50 + -0x18));
    wios::clear(pwVar10,*(uint *)(pwVar10 + 0x20) | 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}

