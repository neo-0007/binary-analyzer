
void d_count_templates_scopes(long param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  do {
    if (1 < (int)param_2[2]) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x134);
    if (0x400 < iVar1) {
      return;
    }
    param_2[2] = param_2[2] + 1;
    switch(*param_2) {
    default:
      goto switchD_006b6e96_caseD_0;
    case 4:
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x44:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
      piVar2 = *(int **)(param_2 + 4);
      goto LAB_006b6ed4;
    case 7:
    case 8:
    case 0x33:
      param_2 = *(undefined4 **)(param_2 + 6);
      break;
    case 0x23:
    case 0x24:
      piVar2 = *(int **)(param_2 + 4);
      if (*piVar2 == 5) {
        *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
      }
LAB_006b6ed4:
      *(int *)(param_1 + 0x134) = iVar1 + 1;
      d_count_templates_scopes(param_1,piVar2);
      d_count_templates_scopes(param_1,*(undefined8 *)(param_2 + 6));
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
      return;
    case 0x2c:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
      param_2 = *(undefined4 **)(param_2 + 4);
    }
  } while (param_2 != (undefined4 *)0x0);
switchD_006b6e96_caseD_0:
  return;
}

