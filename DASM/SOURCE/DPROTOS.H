/*  DPROTOS.H  */  
/*  Written by Richard A. Burgess.  */  

/*  This code is released to the public domain.  */ 
/*  "Share and enjoy....."  ;)    */ 


int expr4(long *val);
int expr3(long *val);
int expr2(long *val);
int expr1(long *val);
int Expression(void);
int is_Reg(int op);
int is_r32(int id);
int is_r16(int id);
int is_r8(int id);
int is_rSEG(int id);
int is_rDRG(int id);
int is_rCRG(int id);
int is_rTR(int id);
void fatal_error(char *pst);
void line_error(int num);
void prev_error(char *pst, int line);
char is_ident(char chr);
char isskip(char chr);
void put_hexb(U8 value, FILE *fout);
void put_hexw(U16 value, FILE *fout);
void put_hexd(U32 value, FILE *fout);
U32 get_number(void);
int findrsvd(char *pb, int cb);
int findinst(char *pb, int cb);
int findreg(char *pb, int cb);
int findsymbol(char *pb, int cb);
void DumpGSymbols(void);
void DumpLSymbols(void);
void ReturnToken(void);
int Parse(void);
void Command(void);
int EvalOper1(int op);
int EvalOper(int op);
void ForRef(unsigned char type, long Offset);
void FixUp(unsigned char typef, long Offset, unsigned int iSymbol);
void ExtRef(unsigned char EType, unsigned int iSymbol);
int GetOper(int op);
void Instruction(void);
void AddMacro(void);
void Storage(void);
void NewSymbol(void);
void Resolve(void);
int readline(void);
void Dispatch(void);
void main(int argc, char *argv[]);
