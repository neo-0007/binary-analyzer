
undefined8 bindtextdomain(char *param_1,undefined8 param_2)

{
  undefined8 local_10 [2];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_10[0] = param_2;
    set_binding_values_part_0(param_1,local_10,0);
    return local_10[0];
  }
  return 0;
}

