#define MAX_BUFFER 100

struct line_in 
{
	char command;
	int params[10];
};

struct line_in parse_line(char *line)
{
	struct line_in parsed;
	char rest[MAX_BUFFER];

	sscanf(line, "%c %d %d", 
		&parsed.command, 
		&parsed.params[0], 
		&parsed.params[1]);
	
	return parsed;
}

void exec_cmd(struct line_in cmd)
{
	switch(cmd.command)
	{
		case '+':
			PLUS(cmd.params[0]);
			break;
		case '-':
			MINUS();
			break;
	}
}

void parse_exec()
{
	char line[MAX_BUFFER];
	struct line_in parsed_line;

	while( fgets(line, MAX_BUFFER, stdin) != NULL )
	{
		parsed_line = parse_line(line);
		exec_cmd(parsed_line);
	}

}