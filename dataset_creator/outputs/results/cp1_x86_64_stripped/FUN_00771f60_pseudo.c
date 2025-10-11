
void FUN_00771f60(void)

{
  char *pcVar1;
  
  pcVar1 = "stack smashing detected";
  FUN_00771f80("stack smashing detected");
  do {
    FUN_00702e20(1,"*** %s ***: terminated\n",pcVar1);
  } while( true );
}

