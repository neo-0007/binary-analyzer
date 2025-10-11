
undefined8 d_template_arg(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  if (cVar1 == 'L') {
    uVar4 = d_expr_primary();
    return uVar4;
  }
  if (cVar1 < 'M') {
    if ((byte)(cVar1 + 0xb7U) < 2) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      uVar4 = d_template_args_1();
      return uVar4;
    }
  }
  else if (cVar1 == 'X') {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    uVar4 = d_expression_1();
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if (**(char **)(param_1 + 0x18) == 'E') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  uVar4 = d_type();
  return uVar4;
}

