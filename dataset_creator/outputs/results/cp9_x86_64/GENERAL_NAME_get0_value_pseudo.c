
void * GENERAL_NAME_get0_value(GENERAL_NAME *a,int *ptype)

{
  if (ptype != (int *)0x0) {
    *ptype = a->type;
  }
  switch(a->type) {
  case 0:
    return (a->d).ptr;
  case 1:
  case 2:
  case 6:
    return (a->d).ptr;
  case 3:
    return (a->d).ptr;
  case 4:
    return (a->d).ptr;
  case 5:
    return (a->d).ptr;
  case 7:
    return (a->d).ptr;
  case 8:
    return (a->d).ptr;
  default:
    return (void *)0x0;
  }
}

